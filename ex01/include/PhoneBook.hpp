/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:39 by imatek            #+#    #+#             */
/*   Updated: 2025/05/03 10:35:41 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{

private:

	Contact contacts[8]; //si +1 i - 0
	int i;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	add(void);
	void	search(void);
	void	display_list(void) const;
};

#endif
