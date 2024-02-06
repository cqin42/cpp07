/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:19:22 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 09:35:35 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Func>
void	iter(T *array, size_t length, Func function)
{
	for (unsigned long int i = 0; i < length; i++)
	{
		function(array[i]);
	}
}

template<typename T>
void	printArray(T &array)
{
	std::cout << "-" << array << std::endl;
}

#endif
