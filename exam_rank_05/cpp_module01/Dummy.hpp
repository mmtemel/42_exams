/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:40:00 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/06 14:53:36 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

class Dummy : public ATarget
{
	public:
		Dummy();
		~Dummy();

		ATarget* clone();
};