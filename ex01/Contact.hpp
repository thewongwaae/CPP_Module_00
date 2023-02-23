/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:54:41 by hwong             #+#    #+#             */
/*   Updated: 2023/01/06 23:54:41 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
#define CONTACTS_HPP

#include <iostream>
#include <iomanip>

class Contact {
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_index;

		std::string	_print(std::string str) const;
		std::string	_getInput(std::string str) const;
	
	public:
		// constructor - init objs and alloc mem
		Contact();
		// deconstructor - release mem and clean up
		~Contact();
		void	init(void);
		void	view(int index) const;
		void	display(int index) const;
		void	setIndex(int i);
};

#endif