/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 15:11:34 by tnakas           ###   ########.fr       */
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
	
	std::cout << "Stack elements: \n";
	MuntantStack<int>::iterator it = mstack.begin();
	MuntantStack<int>::iterator ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";

	std::cout << "Stack elements (rbegin to rend): \n";
	MuntantStack<int>::reverse_iterator rit = mstack.rbegin();
	MuntantStack<int>::reverse_iterator rite = mstack.rend();
	while (rit != rite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << "\n";
	
	std:: cout << "Testing the copy: \n\n";
	std::stack<int> s(mstack);
	std::cout << "Top of copied std::stack " << s.top() << "\n";
	
	//comparing with std::list
	std::cout << "Comparing with std::list:\n";
	std::list<int> lstack;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);

	return 0;
}