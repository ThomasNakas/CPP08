/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnakas <tnakas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:52:06 by tnakas            #+#    #+#             */
/*   Updated: 2025/03/02 16:56:29 by tnakas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
#include <vector>
#include <exception>

//notfoundexception class  inhereted from the exception class
//I'm setting it in oreder to call it with a customizable message
class NotFoundException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return "Element not found in the container";
		}
};

template <typename T>
typename T::iterator easyfind(T& container, int value)
{
	typename T::iterator it =std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw NotFoundException();
	return it;
};
#endif