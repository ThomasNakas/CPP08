/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 12:05:19 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 16:24:06 by tnakas           ###   ########.fr       */
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
		//Large Set 1
		Span largeSpan(10000);
		std::vector<int> largeSet;
		for (int i = 0; i < 10000; i++)
			largeSet.push_back (i * 10);
		largeSpan.addRange(largeSet.begin(), largeSet.end());
		std::cout << "//---------------------(required)LAGRE SET TEST 1-------------//\n";	
		std::cout << "(10000 elements)Shortest Span: " << largeSpan.shortestSpan() << "\n";
		std::cout << "(10000 elements)Longest Span: " << largeSpan.longestSpan() << "\n";
		//Large Set 2
		Span largeSpan2(10010);
		std::vector<int> largeSet2;
		for (int i = 0; i < 10010; i++)
			largeSet2.push_back (i * 10);
		largeSpan2.addRange(largeSet2.begin(), largeSet2.end());
		std::cout << "//---------------------(extra)LAGRE SET TEST 2----------------//\n";	
		std::cout << "(10010 elements)Shortest Span: " << largeSpan2.shortestSpan() << "\n";
		std::cout << "(10010 elements)Longest Span: " << largeSpan2.longestSpan() << "\n";
		//Large Set 3
		Span largeSpan3(20010);
		std::vector<int> largeSet3;
		for (int i = 0; i < 20010; i++)
			largeSet3.push_back (i * 10);
		largeSpan3.addRange(largeSet3.begin(), largeSet3.end());
		std::cout << "//---------------------(extra)LAGRE SET TEST 3----------------//\n";	
		std::cout << "(20010 elements)Shortest Span: " << largeSpan3.shortestSpan() << "\n";
		std::cout << "(20010 elements)Longest Span: " << largeSpan3.longestSpan() << "\n";
		
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception: " << e.what() << '\n';
	}
	return 0;
}