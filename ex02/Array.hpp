/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:39:29 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 11:00:52 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typedef T>

class Array
{
	private:

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &autre);
		Array &operator=(const &autre);
		~Array();
};



#endif
