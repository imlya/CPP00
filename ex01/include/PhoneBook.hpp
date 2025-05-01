/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:39 by imatek            #+#    #+#             */
/*   Updated: 2025/05/01 22:55:42 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>


class PhoneBook{

private:

	Contact contacts[8]; //si +1 i - 0

public:

	PhoneBook(void);
	~PhoneBook(void);

};


#endif
