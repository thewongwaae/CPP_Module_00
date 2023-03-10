/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:58:39 by hwong             #+#    #+#             */
/*   Updated: 2023/01/06 23:58:39 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::_getInput(std::string str) const {
	std::string input = "";
	bool		valid = false;
	do
	{
		std::cout << str << std::flush;
		std::getline(std::cin, input);
		if (std::cin.good() && !input.empty())
			valid = true;
		else {
			std::cin.clear();
			std::cout << "Invalid input; please try again." << std::endl;
		}
	} while (!valid);
	return (input);
}

void Contact::init(void) {
	std::cin.ignore();
	this->_firstName = this->_getInput("First name:\t");
	this->_lastName = this->_getInput("Last name:\t");
	this->_nickName = this->_getInput("Nickname:\t");
	this->_phoneNumber = this->_getInput("Phone number:\t");
	this->_darkestSecret = this->_getInput("Darkest secret:\t");
	std::cout << std::endl;
}


std::string Contact::_print(std::string str) const {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void Contact::setIndex(int i) {
	this->_index = i;
}

void Contact::view(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
		return ;
	std::cout << "|" << std::setw(10) << index << std::flush;
	std::cout << "|" << std::setw(10) << this->_print(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_print(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_print(this->_nickName) << std::flush;
	std::cout << "|" << std::endl;
}

void Contact::display(int index) const {
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickName.empty())
		return ;
	std::cout << std::endl;
	std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
	std::cout << "First Name:\t" << this->_firstName << std::endl;
	std::cout << "Last Name:\t" << this->_lastName << std::endl;
	std::cout << "Nickname:\t" << this->_nickName << std::endl;
	std::cout << std::endl;
}