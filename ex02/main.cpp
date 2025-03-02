/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 15:18:31 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "testing MuntantStack:\n";

	MuntantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top element: " << mstack.top() << "\n";
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << "\n";
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	//testing the order of the stack
	std::cout << "Stack elements: \n";
	MuntantStack<int>::iterator it = mstack.begin();
	MuntantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";
	//testing the reverse order of the stack
	std::cout << "Stack elements (reverse): \n";
	MuntantStack<int>::reverse_iterator rit = mstack.rbegin();
	MuntantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << "\n";
	//testing the copy constractor
	std::stack<int> s(mstack);
	std::cout << "Top of copied std::stack: " << s.top() << "\n";
	
	//comparing with std::list
	std::cout << "Comparing with std::list:\n";
	std::list<int> lstack;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::cout << "List elements: \n";
	for (std::list<int>::iterator lit = lstack.begin(); lit !=lstack.end(); ++lit)
		std::cout << *lit << " ";
	std::cout << "\n";

	return 0;
}