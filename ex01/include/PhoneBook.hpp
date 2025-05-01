/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:39 by imatek            #+#    #+#             */
/*   Updated: 2025/05/01 12:29:36 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>

class PhoneBook{

private:

	std::string	Contact[8];

public:

	PhoneBook(void);
	~PhoneBook(void);

};

// char contact[8] => si + 1 on revient a i = 0
// pas d'alloc

#endif
