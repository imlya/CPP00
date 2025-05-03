/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:45 by imatek            #+#    #+#             */
/*   Updated: 2025/05/03 10:28:30 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook book;
	Contact users;

	while ("!EXIT")
	{
		if ("ADD")
			book.add();
		else if ("SEARCH")
			book.search();
		else
			std::cout << "error : please inter ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}

// gerer le ctrl D
