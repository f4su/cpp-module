/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:20:51 by jgainza-          #+#    #+#             */
/*   Updated: 2022/05/30 18:37:22 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	random = rand() % 3;

	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
}

void	identify(Base *p)
{
	EOL();
	std::cout << BOLD"By Point: "CLOSE;
	A *a;
	if ((a = dynamic_cast<A *>(p)))
		std::cout << BOLD"Object type is A\n"CLOSE;
	B *b;
	if ((b = dynamic_cast<B *>(p)))
		std::cout << BOLD"Object type is B\n"CLOSE;
	C *c;
	if ((c = dynamic_cast<C *>(p)))
		std::cout << BOLD"Object type is C\n"CLOSE;
}

void	identify(Base &p)
{
	std::cout << BOLD"By Reference: "CLOSE;
	try
	{
		A	&a = dynamic_cast<A &>(p);
		std::cout << BOLD"Object type is A\n"CLOSE;
		(void)a;
	}
	catch (std::exception){}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		std::cout << BOLD"Object type is B\n"CLOSE;
		(void)b;
	}
	catch (std::exception){}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		std::cout << BOLD"Object type is C\n"CLOSE;
		(void)c;
	}
	catch (std::exception){}
	EOL();
}

int	main(void)
{
	Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	base = generate();
	identify(base);
	identify(*base);
	delete (base);

	return (0);
}
