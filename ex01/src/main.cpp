/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:45 by imatek            #+#    #+#             */
/*   Updated: 2025/05/06 00:04:09 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	PhoneBook book;
	Contact users;
	std::string str1 = "EXIT";
	std::string str2 = "ADD";
	std::string str3 = "SEARCH";

	if (ac == 2)
	{
		while (str1 != av[1])
		{
			if (str2 == av[1])
			{
				book.add();
				break ;
			}
			else if (str3 == av[1])
			{
				book.search();
				break ;
			}
			else
				std::cout << "error : please enter ADD, SEARCH or EXIT" << std::endl;
		}
	}
	return (0);
}

// gerer le ctrl D
