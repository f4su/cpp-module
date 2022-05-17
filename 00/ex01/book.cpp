/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgainza- <jgainza-@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:29:26 by jgainza-          #+#    #+#             */
/*   Updated: 2022/03/28 19:32:43 by jgainza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class	contacts
{
	public:
		std::string	f_name;
		std::string	l_name;
		std::string	nickname;
		std::string	phone;
		std::string	secret;
};

class	book
{
	public:
		contacts	info[8];
		int			count_c;
};

static void	ft_write(std::string s)
{
	int	len;
	int	i;

	i = -1;
	len = strlen(s.c_str());
	if (len <= 10)
	{
		std::cout << s;
		while (len < 10)
		{
			std::cout << " ";
			len++;
		}
		std::cout << "|";
	}
	if (len > 10)
	{
		std::cout << s.substr(0, 9);
		std::cout << ".";
		std::cout << "|";
	}
}

static void	ft_search_id(book book, std::string id)
{
	int	i;
	int	len;

	i = std::atoi(id.c_str());
	len = strlen(id.c_str());
	if (i < book.count_c && std::isdigit(id[0]) && len == 1)
	{
		std::cout << "first name     : " << book.info[i].f_name << std::endl;
		std::cout << "last name      : " << book.info[i].l_name << std::endl;
		std::cout << "nickname       : " << book.info[i].nickname << std::endl;
		std::cout << "phone          : " << book.info[i].phone << std::endl;
		std::cout << "darkest secret : " << book.info[i].secret << std::endl;
	}
	else 
		std::cout << "Id no existant" << std::endl;
}

static void	ft_search_contact(book book)
{
	int			i;
	std::string	id;

	i = 0;
	if (!book.count_c)
		return ;
	while (i < book.count_c)
	{
		std::cout << i;
		std::cout << "         |";
		ft_write(book.info[i].f_name);
		ft_write(book.info[i].l_name);
		ft_write(book.info[i].nickname);
		std::cout << std::endl;
		i++;
	}
	if (book.count_c > 0)
	{
		std::cout << std::endl;
		std::cout << "Who are you searching for?\nIntrouce number id: ";
		std::getline(std::cin, id);
		ft_search_id(book, id);
	}
}

int	main(void)
{
	int			i;
	std::string	str;
	book		book;

	i = 0;
	while (1)
	{
		std::getline (std::cin,str);
		if (i == 8)
			i = 0;
		if (str.compare("ADD") == 0) 
		{
			if (book.count_c < 8)
				book.count_c = i + 1;
			std::cout << "first name     : ";
			std::getline (std::cin,book.info[i].f_name);
			std::cout << "last name      : ";
			std::getline (std::cin,book.info[i].l_name);
			std::cout << "nickname       : ";
			std::getline (std::cin,book.info[i].nickname);
			std::cout << "phone          : ";
			std::getline (std::cin,book.info[i].phone);
			std::cout << "darkest secret : ";
			std::getline (std::cin,book.info[i].secret);
			i++;
		}
		if (str.compare("SEARCH") == 0)
			ft_search_contact(book);
		if (str.compare("EXIT") == 0 || std::cin.eof())
			break ;
	}
	return (0);
}
