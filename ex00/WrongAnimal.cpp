/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:12:31 by qais              #+#    #+#             */
/*   Updated: 2025/10/09 15:28:45 by qais             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	type = "WrongAnimal";
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	*this = obj;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << getType() << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->type);
}
