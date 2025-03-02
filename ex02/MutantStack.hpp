/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:51:04 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 16:54:13 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUNTANTSTACK_HPP
#define MUNTANTSTACK_HPP

#include <stack>
#include <deque>
#include <list>
#include <iostream>

template <typename T>
class MuntantStack : public  std::stack<T>
{
	public:
		//aliases
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MuntantStack() : std::stack<T>() {}
		//the atributes constructor is missing because I don't have atributes
		MuntantStack(const MuntantStack& other) : std::stack<T>(other) {}
		MuntantStack& operator=(const MuntantStack& other)
		{
			if (this != &other)
				std::stack<T>::operator=(other);
			return *this;
		}
		~MuntantStack() {}
		
		//iterator functions
		
		iterator begin() {return this->c.begin();}
		iterator end() {return this->c.end();}

		const_iterator begin() const { return this->c.begin();}
		const_iterator end() const { return this->c.end();}
	
		reverse_iterator rbegin() { return this->c.rbegin();}
		reverse_iterator rend() {return this->c.rend();}
		
		const_reverse_iterator rbegin() const {return this->c.rbegin();}
		const_reverse_iterator rend() const {return this-> c.rend();} 
		
};

#endif