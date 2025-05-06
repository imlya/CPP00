/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/06 10:02:44 by Moon             ###   ########.fr       */
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

int Contact::phone_is_digit()
{
	for (size_t i = 0; i < _phone_number.length(); i++)
		if(!isdigit(_phone_number[i]))
			return (0);
	return (1);
}

int Contact::printable_infos(std::string &string)
{
	for (size_t i = 0; i < string.length(); i++)
		if(!isprint(string[i]))
			return (0);
	return (1);
}
