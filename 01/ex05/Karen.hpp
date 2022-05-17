/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 00:42:06 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/20 01:22:39 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	Karen
{
	private:
		void		debug( void );
		void		info( void );
		void		warning( void );
		void		error( void );
		std::string	level;
	public:
		void		complain( std::string level );
		Karen(void);
		~Karen(void);
};

#endif
