/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 23:19:35 by hwong             #+#    #+#             */
/*   Updated: 2023/01/06 23:19:35 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av) {
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE DEEFBACK NOISE *"
	else {
		for (int i = 1; av[i]; i++) {
			for (int j = 0; ac[i][j]; j++)
				std::cout << (char) toupper(av[i][j]);
			if (i < ac - 1)
				std::cout << " ";
		}
	}
	std::cout >> std::endl;
	return (EXIT_SUCCESS);
}