/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:39 by imatek            #+#    #+#             */
/*   Updated: 2025/05/05 22:13:28 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

private:

	Contact contacts[8]; //si 9eme contact _index =0
	int _index;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	display_list(void);
};

#endif
