/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/01 22:53:05 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructeur
Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	//this/self pointeur sur l'instance courante => initialisation des attributs
	this->add();
	this->search();
	return ;
}

//destructeur
Contact::~Contact(void)
{
	std::cout << "Bye Contact" << std::endl;
	return ;
}

void Contact::set_first(std::string first)
{
	this->_first_name = first;
	return ;
}

void Contact::set_last(std::string last)
{
	this->_last_name = last;
	return ;
}

void Contact::set_nickname(std::string nick)
{
	this->_nickname = nick;
	return ;
}

void Contact::set_phone(std::string phone)
{
	this->_phone_number = phone;
	return ;
}

void Contact::set_secret(std::string secret)
{
	this->_darkest_secret = secret;
	return ;
}
