/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:45 by imatek            #+#    #+#             */
/*   Updated: 2025/05/06 10:28:04 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	std::string commande;

	while(true)
	{
		std::cout << "Please enter ADD, SEARCH or EXIT" << std::endl;
		getline(std::cin, commande);
		if (commande == "EXIT")
			break;
		if (commande == "ADD")
			book.add();
		else if (commande == "SEARCH")
			book.search();
		else
			std::cout << "error : please enter ADD, SEARCH or EXIT" << std::endl;
		}
	return (0);
}

// gerer le ctrl D
