/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:39:29 by christine         #+#    #+#             */
/*   Updated: 2024/02/09 00:03:49 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	private:
		unsigned int _size;
		T *_array;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &autre);
		Array &operator=(const Array &autre);
		~Array();

		T &operator[](unsigned int i) const;
		unsigned int size() const;

		class OutofBoundsException: public std::exception
		{
			public:
				virtual const char* what() const throw
				{
					return ("index is out of bounds");
				}
		}
};



#endif
