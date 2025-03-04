/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 17:03:28 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> vec = {1, 2, 3, 4, 5};
		std::cout << "Found: " << *easyfind(vec, 3) << "\n";
		
		std::list<int> lst = {10, 20, 30, 40, 50};
		std::cout << "Found: " << *easyfind(lst, 20) << "\n";
		std::cout << "//---exception test---//\n";
		std::cout << "Seaching for 100... \n";
		easyfind(vec, 100);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << "\n";
	}
	
	return 0;
}