/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:33:21 by hwong             #+#    #+#             */
/*   Updated: 2023/01/06 23:33:21 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <limits>

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int		_readInput(void) const;

	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	printContacts(void) const;
		void	search(void) const;
		void	splash(void) const;
};

#endif