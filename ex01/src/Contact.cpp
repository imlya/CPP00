/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/05 21:57:27 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructeur
Contact::Contact(void)
{
	return ;
}

//destructeur
Contact::~Contact(void)
{
	return ;
}

int Contact::full_digit()
{
	for (size_t i = 0; i < _phone_number.length(); i++)
		if(!isdigit(_phone_number[i]))
			return (0);
	return (1);
}
