#include "PhoneBook.hpp"
#include "Contact.hpp"

_phone_number digit
le reste !digit
pars()
{
	for (size_t i = 0; i < _phone_number.length(); i++)
	{
		if(!isdigit(_phone_number[i]))
			std::cout << "please enter digits" << std::endl;
	}
}
