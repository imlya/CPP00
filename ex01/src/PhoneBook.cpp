/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/05/05 22:35:00 by Moon             ###   ########.fr       */
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
	for(_index = 0; _index < 8; _index++)
	{
		contacts[_index].fill_contact();
		break ;
	}
	_index =0;
}

void PhoneBook::display_list ()
{
	Contact users;

	for( _index = 0; _index < 8; _index++)
	{
		std::cout << "__________________________________" << std::endl;
		users.display_summary(_index);
	}
}
void PhoneBook::search()
{
	Contact searched;

	display_list();
	std::cout << "Please choose an index" << std::endl;
	std::cin >> _index;
	// entrer le BON index du contact
	searched.display_full();
	// else
	// 	error;
}
