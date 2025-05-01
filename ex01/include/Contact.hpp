/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Moon <Moon@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:37:36 by imatek            #+#    #+#             */
/*   Updated: 2025/05/01 13:01:13 by Moon             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact{

private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	int exp;

	Contact(void);
	~Contact(void);

	void	add(void);
	void	search(void);
	void	set_first(std::string first);
	void	set_last(std::string last);
	void	set_nickname(std::string nick);
	void	set_phone(std::string phone);
	void	set_secret(std::string secret);
};

#endif
