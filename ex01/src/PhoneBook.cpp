/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:48 by imatek            #+#    #+#             */
/*   Updated: 2025/05/06 10:25:27 by Moon             ###   ########.fr       */
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
	contacts[_index].infos_contact();
	if(_index < 7)
		_index++;
	else
		_index = 0;
}

void PhoneBook::display_list ()
{
	std::cout << "     Index|First name| Last name|  Nickname" << std::endl << std::endl;
	for(int i = 0; i < 8; i++)
	{
		std::cout << "     ----------------------------------------" << std::endl;
		contacts[i].summary_infos(i);
	}
}
void PhoneBook::search()
{
	display_list();
	std::cout << "Please choose an index" << std::endl;
	std::cin >> _index;
	if (_index < 0 || _index > 7)
		std::cout << "error : please enter an index between 0 and 7" << std::endl;
	else
		contacts[_index].all_infos();
}
