/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:29:43 by hwong             #+#    #+#             */
/*   Updated: 2023/01/06 23:29:43 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void) {
	PhoneBook book;

	std::string input = "";
	book.splash();
	while (input.compare("EXIT")) {
		if (!input.compare("ADD"))
			book.addContact();
		else if (!input.compare("SEARCH")) {
			book.printContacts();
			book.search();
		}
		std::cout << ">" << std::flush;
		std::cin >> input;
	}
	return (0);
}