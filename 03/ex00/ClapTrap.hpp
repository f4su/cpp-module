/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:37:14 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/13 14:02:31 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define BOLD  "\001\033[1m\002"
# define CLOSE "\001\033[0m\002"

class	ClapTrap
{
	private:
		std::string	name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		ClapTrap &	operator=(ClapTrap const & rhs);
		std::string	get_name(void)const;
		int			get_Hitpoints(void)const;
		int			get_Energy_points(void)const;
		int			get_Attack_damage(void)const;
		void		print_inits(void)const;
};

std::ostream & operator<<(std::ostream & o, ClapTrap const & src);

#endif
