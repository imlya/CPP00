/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/05/02 23:52:35 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// constructeur
PhoneBook::PhoneBook()
{
	// this/self pointeur sur l'instance courante => initialisation des attributs
	this->i = 0;
	this->add();
	this->search();
	this->display_list();
	return;
}

// destructeur
PhoneBook::~PhoneBook()
{
	return;
}
