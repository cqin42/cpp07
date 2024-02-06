/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 09:26:45 by christine         #+#    #+#             */
/*   Updated: 2024/02/06 09:37:09 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	size_t size = 3;
	std::string array[] = {"hello", "world", "!"};

	iter(array, size, ::printArray<std::string>);
}
