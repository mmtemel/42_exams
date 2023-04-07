/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtemel <mtemel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:26:10 by mtemel            #+#    #+#             */
/*   Updated: 2023/04/07 16:55:46 by mtemel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
#define FWOOSH_HPP

#include "ASpell.hpp"

class Fwoosh :public ASpell
{
	public:
		Fwoosh();
		~Fwoosh();

	virtual ASpell *clone() const;
};

#endif