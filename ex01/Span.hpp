/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:51:41 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/26 02:20:24 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP 
#define SPAN_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	unsigned int _N; //max
	std::vector<int> _numbers; //container
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span(void);
		//Methods
		void addNumber(int n);
		int shortestSpan(void) const;
		int longestSpan(void) const;
		//debugging
		void printNumbers() const;
		
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end)
		{
			if (_numbers.size() + std::distance(begin,end) > _N)
				throw std::overflow_error("Not enough space in Span");
			_numbers.insert(_numbers.end(), begin, end);
		};
};
#endif