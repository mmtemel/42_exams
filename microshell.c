#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int	write_error(char *str, char *argv)
{
	while (*str)
		write(2, str++, 1);
	while (*argv)
		write(2, argv++, 1);
	write(2, "\n", 1);
	return (1);
}

int	ft_exe(char *arg, char **argv, int i, char **envp)
{
	argv[i]=NULL;
	if(execve(arg, argv, envp) == -1)
		return(write_error("error: cannot execute ", arg));
	return (0);
}

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	int i = 0;
	while (argv[i] && argv[i + 1])
	{
		argv = &argv[i + 1];
		i = 0;
		while(argv[i] && strcmp(argv[i], "|") && strcmp(argv[i], ";"))
			i++;
		if (strcmp("cd", argv[0]) == 0)
		{
			if(i != 2)
				write_error("error: cd: bad arguments", NULL);
			else if (chdir(argv[1]) == -1)
				write_error("error: cd: cannot change directory to ", argv[1]);
		}
		else if (i != 0 && (argv[i] == NULL || strcmp(";", argv[i]) == 0))
		{
			if(!fork())
			{
				if(ft_exe(argv[0], argv, i, envp))
					return (1);
			}
			else
			{
				waitpid(-1,NULL,0);
			}
		}
	}
}
