/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/05/01 12:25:23 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

//constructeur
PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created" << std::endl;
	return ;
}

//destructeur
PhoneBook::~PhoneBook()
{
	std::cout << "Bye Phonebook" << std::endl;
	return ;
}

//fonction membre
//contient tjs 1 parametre par defaut = pointeur sur instance courante

