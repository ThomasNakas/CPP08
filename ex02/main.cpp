/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 16:21:12 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	//----Required testing-----------------
	std::cout << "//========REQUIRED TESTING=================\n";
	std::cout << "----------testing MuntantStack-------------\n";

	MuntantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "(last) top element: " << mstack.top() << "\n";
	mstack.pop();
	std::cout << "Size after pop: " << mstack.size() << "\n";
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	//testing the order of the stack
	std::cout << "Stack elements: \n";
	MuntantStack<int>::iterator it = mstack.begin();
	//testing the const
	MuntantStack<int>::const_iterator cite = mstack.end();
	// ite = 5;
	++it;
	--it;
	while (it != cite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";
	//testing the reverse order of the stack
	std::cout << "----------testing reverse order------------\n";
	//testing the copy constractor
	std::stack<int> s(mstack);
	std::cout << "Top of copied std::stack: " << s.top() << "\n";
	
	//comparing with std::list
	std::cout << "Comparing with std::list:\n";
	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::cout << "List elements: \n";
	for (std::list<int>::iterator lit = lstack.begin(); lit !=lstack.end(); ++lit)
	std::cout << *lit << " ";
	std::cout << "\n";
	std::cout << "//==========EXTRA TESTING=================\n";
	std::cout << "Stack elements (reverse): \n";
	MuntantStack<int>::reverse_iterator rit = mstack.rbegin();
	//testing the const
	MuntantStack<int>::const_reverse_iterator crite = mstack.rend();
	// rite = 5;
	while (rit != crite)
	{
		std::cout << *rit << " ";
		++rit;
	}
	std::cout << "\n";
	std::cout << "Stack elements: \n";
	it = mstack.begin();
	while (it != cite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << "\n";
	std::cout << "-----------testing top and pop------------\n";
	std::cout << "Size before pop: " << mstack.size() << "\n";
	std::cout << "(last in, first out) top element: " << mstack.top() << "\n";
	mstack.pop();
	std::cout << "Size after pop:  " << mstack.size() << "\n";
	std::cout << "(last in, first out) new top element after pop: " << mstack.top() << "\n";
	return 0;
}