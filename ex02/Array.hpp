/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:39:29 by christine         #+#    #+#             */
/*   Updated: 2024/02/09 13:36:03 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
		Array():_size(0), _data(0)
		{};

		Array(unsigned int n): _size(n)
		{
			_data = new T[n];
		}

		Array(const Array &autre): _size(autre._size)
		{
			_data = new T[autre._size];
			for (unsigned int i = 0; i < autre._size; i++)
			{
				_data[i] = autre._data[i];
			}
		}

		Array &operator=(const Array &autre)
		{
			if (this != &autre)
			{
				if (_data)
					delete[] _data;
				_size = autre._size;
				_data = new T[autre._size];
				for (unsigned int i = 0; i < autre._size; i++)
				{
					_data[i] = autre._data[i];
				}
			}
			return (*this);
		}


		~Array()
		{
			if (_data)
				delete[] _data;
		}

		T &operator[](unsigned int i) const
		{
			if (i >= _size)
				throw OutofBoundsException();
			return (_data[i]);
		}


		unsigned int size() const
		{
			return (_size);
		}

		class OutofBoundsException: public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("index is out of bounds");
				}
		};

	private:
		T *_data;
		unsigned int _size;
};

#endif
