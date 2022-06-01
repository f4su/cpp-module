/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:57:22 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/27 20:47:18 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"
# include <string>
# include <iostream>
# include <stdint.h>

typedef struct	s_Data
{
	std::string data;
}				Data;

#endif
