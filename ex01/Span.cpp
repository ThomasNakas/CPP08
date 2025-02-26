/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:51:38 by tnakas            #+#    #+#             */
/*   Updated: 2025/02/26 01:37:33 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _N(0){}
Span::Span(unsigned int N) : _N(N){}
Span::Span(const Span& other) : _N(other._N), _numbers(other._numbers){}
Span& Span::operator=(const Span& other)
{
	if(this != &other)
	{
		_N = other._N;
		_numbers = other._numbers;
	}
	return *this;
};
Span::~Span(){};
//Methods
void Span::addNumber(int n)
{
	if (_numbers.size() >= _N)
		throw std::overflow_error("Span is already full!");
	_numbers.push_back(n);
};
int Span::shortestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find the span");
	std::vector<int> sorted = _numbers; // copy vector
	std::sort(sorted.begin(), sorted.end());
	int minSpan = 2147483647; // initializing
	for (size_t i = 0;  i < sorted.size() - 1; ++i)
		minSpan = std::min(minSpan, sorted[i + 1] - sorted[i]);
	return minSpan;
};
int Span::longestSpan(void) const
{
	if (_numbers.size() < 2)
		throw std::logic_error("Not enough numbers to find the span");
	std::vector<int> sorted = _numbers; // copy vector
	std::sort(sorted.begin(), sorted.end());
	return sorted[_N - 1] - sorted[0];
};
//debugging
void Span::printNumbers() const
{
	for (int num : _numbers)
		std::cout << num << " ";
	std::cout << "\n";
};
