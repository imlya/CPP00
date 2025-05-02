#include "PhoneBook.hpp"
#include "Contact.hpp"


// fonction membre
// contient tjs 1 parametre par defaut = pointeur sur instance courante
void Contact::fill_contact()
{
	char buff[45];

	std::cout << "===== NEW CONTACT =====" << std::endl;
	std::cout << "First name : "; std::cin >> buff;
	std::cout << "Last name : "; std::cin >> buff;
	std::cout << "Nickname : "; std::cin >> buff;
	std::cout << "Phone number : "; std::cin >> buff;
	std::cout << "Darkest secret : "; std::cin >> buff;
	std::cout << "======================" << std::endl;


	// -entree utilisateur cin
	// -stock
	// pas de champ vide
	return;
}

void Contact::display_full()
{
	// 1 attribut / ligne
	return;
}

void Contact::display_summary(int i)
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

void PhoneBook::display_list()
{
	return;
}
