/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:42 by imatek            #+#    #+#             */
/*   Updated: 2025/05/01 13:00:50 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//constructeur
Contact::Contact(void)
{
	std::cout << "Contact created" << std::endl;
	//this/self pointeur sur l'instance courante => initialisation des attributs
	this->exp = 100;
	std::cout << this->exp << std::endl;
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

//fonction membre
//contient tjs 1 parametre par defaut = pointeur sur instance courante
void Contact::add(void)
{
	return ;
}

void Contact::search(void)
{
	return ;
}

void Contact::add(void)
{
	return ;
}

void Contact::set_first(std::string first)
{
	this->first_name = first;
	return ;
}

void Contact::set_last(std::string last)
{
	this->last_name = last;
	return ;
}

void Contact::set_nickname(std::string nick)
{
	this->nickname = nick;
	return ;
}

void Contact::set_phone(std::string phone)
{
	this->phone_number = phone;
	return ;
}

void Contact::set_secret(std::string secret)
{
	this->darkest_secret = secret;
	return ;
}
