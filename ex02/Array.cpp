/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:48:15 by christine         #+#    #+#             */
/*   Updated: 2024/02/09 00:04:10 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array():_data(NULL), _size(0)
{
}
template<typename T>
Array<T>::Array(unsigned int n): _size(n)
{
	_data = new T[n];
}
template<typename T>
Array<T>::Array(const Array &autre): _size(autre._size)
{
	_data = new T[autre._size];
	for (unsigned int i = 0; i < autre._size; i++)
	{
		_data[i] = autre._data[i];
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &autre)
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

template<typename T>
Array<T>::~Array()
{
	if (_data)
		delete[] _data;
}

template<typename T>
T &Array<T>::operator[](unsigned int i) const
{
	if (i >= _size)
		throw OutofBoundsException();
	return (_date[i]);
}


template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

