/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:45 by imatek            #+#    #+#             */
/*   Updated: 2025/05/02 23:27:57 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	Contact users;

	// BOUCLE DE COMMADE
	while ("!EXIT")
	{
		if ("ADD")
			book.add();
		else if ("SEARCH")
			book.search();
		else
			std::cout << "error : please inter ADD SEARCH or EXIT\n";
	}
	return (0);
}

// gerer le ctrl D
