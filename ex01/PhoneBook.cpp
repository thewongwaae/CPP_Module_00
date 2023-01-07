/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:37:30 by hwong             #+#    #+#             */
/*   Updated: 2023/01/06 23:37:30 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void PhoneBook::splash(void) const {
	std::cout << std::endl;
	std::cout << "Hi! This is your teleFonbook!" << std::endl;
	std::cout << std::endl;
	std::cout << "ADD\t: Add a new contact" << std::endl;
	std::cout << "SEARCH\t: Search for an existing contact" << std::endl;
	std::cout << "EXIT\t: Quit your teleFonbook" << std::endl;
	std::cout << std::endl;
}

/* uses [i % 8] to automatically replace the oldest entry once the number of new contacts go over 8 */
void PhoneBook::addContact(void) {
	static int i;
	this->_contacts[i % 8].init();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
}

void PhoneBook::printContacts(void) const {
	std::cout << "Your telePhonebook contacts" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].view(i);
	std::cout << std::endl;
}

int PhoneBook::_readInput() const {
	int		input = -1;
	bool	valid = false;

	do {
		std::cout << "Please enter the contact index: " << std::flush;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8)) {
			valid = true;
		} else {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invald index given, please retry." << std::endl;
		}
	} while (!valid);
	return (input);
}

void PhoneBook::search(void) const {
	int i = this->_readInput();
	this->_contacts[i].display(i);
}