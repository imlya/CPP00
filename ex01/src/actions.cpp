#include "PhoneBook.hpp"
#include "Contact.hpp"

// fonction membre
// contient tjs 1 parametre par defaut = pointeur sur instance courante
void Contact::fill_contact()
{
	//cin s'arrete au premier espace : utiliser getline
	std::cout << "===== NEW CONTACT =====" << std::endl;
	while(_first_name.empty())
	{
		std::cout << "First name : "; getline(std::cin, this->_first_name);
		if(_first_name.empty())
			std::cout << "please enter your First name" << std::endl;
	}
	while(_last_name.empty())
	{
		std::cout << "Last name : "; getline(std::cin, this->_last_name);
		if(_last_name.empty())
			std::cout << "please enter your Last name" << std::endl;
	}
	while(_nickname.empty())
	{
		std::cout << "Nickname : "; getline(std::cin, this->_nickname);
		if(_nickname.empty())
			std::cout << "please enter your Nickname" << std::endl;
	}
	//verifier que c'est que des chiffes (comment utiliser isdigit ?)
	while(_phone_number.empty())
	{
		std::cout << "Phone number : "; getline(std::cin, this->_phone_number);
		if(_phone_number.empty())
			std::cout << "please enter your Phone number" << std::endl;
	}
	while(_darkest_secret.empty())
	{
		std::cout << "Darkest secret : "; getline(std::cin, this->_darkest_secret);
		if(_darkest_secret.empty())
			std::cout << "please enter your Darkest secret" << std::endl;
	}
	std::cout << "======================" << std::endl;
}

void Contact::display_full() const
{
	// 1 attribut / ligne
	return;
}

void Contact::display_summary(int i) const
{
	(void)i;
	// 0|  Jean    |  Dupont  |  Jeanjean
	// 10 char max
	// si + . a la fin
	// alignes a droite
	// entrer le BON index du contact
		// display_full;
	// else
	// 	error;
	return;
}

void PhoneBook::add()
{
	Contact added;

	added.fill_contact();
	return;
}

void PhoneBook::search()
{
	return;
}

void PhoneBook::display_list () const
{
	return;
}
