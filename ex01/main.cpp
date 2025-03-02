/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 15:40:51 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"



int main()
{
	try
	{
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(2);
		sp.addNumber(17);
		sp.addNumber(11);
		
		std::cout << "Stored numbers: ";
		sp.printNumbers();
		std::cout << " Shortess span: " << sp.shortestSpan() << "\n";
		std::cout << " Longest span: " << sp.longestSpan() << "\n";
		//overflowing the span
		try
		{
			sp.addNumber(42);
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception: "<< e.what() << "\n";
		}
		//Large Set
		Span largeSpan(10010);
		std::vector<int> largeSet;
		for (int i = 0; i < 10010; i++)
			largeSet.push_back (i * 10);
		largeSpan.addRange(largeSet.begin(), largeSet.end());	
		std::cout << "Shortest Span: " << largeSpan.shortestSpan() << "\n";
		std::cout << "Longest Span: " << largeSpan.longestSpan() << "\n";
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return 0;
}