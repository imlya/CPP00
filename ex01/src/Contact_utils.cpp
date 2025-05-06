#include "PhoneBook.hpp"
#include "Contact.hpp"

// contient tjs 1 parametre par defaut = pointeur sur instance courante
void Contact::infos_contact()
{
	std::cout << "========= NEW CONTACT =========" << std::endl;
	while(_first_name.empty() || !printable_infos(_first_name))
	{
		std::cout << "First name : "; getline(std::cin, _first_name);
		if(_first_name.empty())
			std::cout << "please enter your First name" << std::endl;
		if(!printable_infos(_first_name))
			std::cout << "please enter printable characters" << std::endl;
	}
	while(_last_name.empty() || !printable_infos(_last_name))
	{
		std::cout << "Last name : "; getline(std::cin, _last_name);
		if(_last_name.empty())
			std::cout << "please enter your Last name" << std::endl;
		if(!printable_infos(_last_name))
			std::cout << "please enter printable characters" << std::endl;
	}
	while(_nickname.empty() || !printable_infos(_nickname))
	{
		std::cout << "Nickname : "; getline(std::cin, _nickname);
		if(_nickname.empty())
			std::cout << "please enter your Nickname" << std::endl;
		if(!printable_infos(_nickname))
			std::cout << "please enter printable characters" << std::endl;
	}
	while(_phone_number.empty() || !phone_is_digit())
	{
		std::cout << "Phone number : "; getline(std::cin, _phone_number);
		if(_phone_number.empty())
			std::cout << "please enter your Phone number" << std::endl;
		if(!phone_is_digit())
			std::cout << "please enter digits" << std::endl;
	}
	while(_darkest_secret.empty() || !printable_infos(_darkest_secret))
	{
		std::cout << "Darkest secret : "; getline(std::cin, _darkest_secret);
		if(_darkest_secret.empty())
			std::cout << "please enter your Darkest secret" << std::endl;
		if(!printable_infos(_darkest_secret))
			std::cout << "please enter printable characters" << std::endl;
	}
	std::cout << "============================" << std::endl;
}

void Contact::summary_infos(int i) const
{
    std::cout << std::setw(10) << std::right << i << "|";
    std::cout << std::setw(10) << std::right << (_first_name.length() > 9 ? _first_name.substr(0, 9) + "." : _first_name) << "|";
    std::cout << std::setw(10) << std::right << (_last_name.length() > 9 ? _last_name.substr(0, 9) + "." : _last_name) << "|";
    std::cout << std::setw(10) << std::right << (_nickname.length() > 9 ? _nickname.substr(0, 9) + "." : _nickname);
    std::cout << std::endl;
}

void Contact::all_infos() const
{
	std::cout << "First name : " << _first_name << std::endl;
	std::cout << "Last name : " << _last_name << std::endl;
	std::cout << "Nickname : " << _nickname << std::endl;
	std::cout << "Phone number : " << _phone_number << std::endl;
	std::cout << "Darkest secret : " << _darkest_secret << std::endl;
}
