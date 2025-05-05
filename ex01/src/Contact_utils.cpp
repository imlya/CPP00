#include "PhoneBook.hpp"
#include "Contact.hpp"

// contient tjs 1 parametre par defaut = pointeur sur instance courante
void Contact::fill_contact()
{
	//verifier si que des lettres ou '-' dans le prenom/ nom
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
	while(_phone_number.empty() || !full_digit())
	{
		std::cout << "Phone number : "; getline(std::cin, this->_phone_number);
		if(_phone_number.empty())
			std::cout << "please enter your Phone number" << std::endl;
		if(!full_digit())
			std::cout << "please enter digits" << std::endl;
	}
	while(_darkest_secret.empty())
	{
		std::cout << "Darkest secret : "; getline(std::cin, this->_darkest_secret);
		if(_darkest_secret.empty())
			std::cout << "please enter your Darkest secret" << std::endl;
	}
	std::cout << "========================" << std::endl;
}

void Contact::display_summary(int i) const
{
	std::cout << i << '|' << _first_name << '|';
	std::cout << _last_name << '|' << _nickname << '|' << std::endl;
	// 10 char max
	// si + (.) a la fin
	// alignes a droite
}

void Contact::display_full() const
{
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone_number << std::endl;
	std::cout << "Darkest secret : " << _darkest_secret << std::endl;
}
