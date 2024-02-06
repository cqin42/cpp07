/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:07:26 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 09:16:34 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	&min(T &a, T &b)
{
	if (a < b)
		return (a);
	return (b);
}

template<typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return (a);
	return (b);
}

#endif
