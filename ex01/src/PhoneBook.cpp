/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/05/06 00:00:07 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// constructeur
PhoneBook::PhoneBook()
{
	// this/self pointeur sur l'instance courante => initialisation des attributs
	this->_index = 0;
	return;
}

// destructeur
PhoneBook::~PhoneBook()
{
	return;
}

void PhoneBook::add()
{
	// comment assigner au tableau ??
	contacts[_index].fill_contact();
		_index++;
	if (_index > 7)
		_index = 0;
}

void PhoneBook::display_list ()
{
	for( _index = 0; _index < 8; _index++)
	{
		std::cout << "__________________________________" << std::endl;
		contacts[_index].display_summary(_index);
	}
}
void PhoneBook::search()
{
	display_list();
	std::cout << "Please choose an index" << std::endl;
	std::cin >> _index;
	// entrer le BON index du contact
	contacts[_index].display_full();
	// else
	// 	error;
}
