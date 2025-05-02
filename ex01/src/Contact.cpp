/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/02 23:46:59 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// constructeur
Contact::Contact(void)
{
	return;
}

// destructeur
Contact::~Contact(void)
{
	return;
}

void Contact::set_first(std::string first)
{
	this->_first_name = first;
	return;
}

void Contact::set_last(std::string last)
{
	this->_last_name = last;
	return;
}

void Contact::set_nickname(std::string nick)
{
	this->_nickname = nick;
	return;
}

void Contact::set_phone(std::string phone)
{
	this->_phone_number = phone;
	return;
}

void Contact::set_secret(std::string secret)
{
	this->_darkest_secret = secret;
	return;
}

// void Contact::setteur(std::string first, std::string last, std::string nick, std::string phone, std::string secret)
// {
// 	this->_first_name = first;
// 	this->_last_name = last;
// 	this->_nickname = nick;
// 	this->_phone_number = phone;
// 	this->_darkest_secret = secret;
// }
