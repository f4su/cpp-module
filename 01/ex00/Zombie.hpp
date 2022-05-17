/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 09:43:25 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/10 13:25:11 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		Zombie(std::string name);
		void	announce(void);
};

void 	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif
