/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:48:15 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 11:05:24 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

Array::Array()
{
}
Array::Array(unsigned int n);
Array::Array(const Array &autre);
Array &Array::operator=(const &autre);
Array::~Array();
