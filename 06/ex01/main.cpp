/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:54:12 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/31 11:53:03 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		*ptr = new Data;
	Data		*new_ptr;
	uintptr_t	raw;

	ptr->data = "U just had this berevage, Its called callypso, and I'd go as far as saying is... fucking minging";
	raw = serialize(ptr);
	std::cout << BOLD << raw << "\n"CLOSE;
	new_ptr = deserialize(raw);
	std::cout << BOLD"new_ptr->data = " << new_ptr->data << "\n"CLOSE;

}
