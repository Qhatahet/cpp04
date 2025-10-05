/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:22:30 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/05 13:11:53 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << MAGENTA "Animal default constructor called" WH<< std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << MAGENTA "Animal copy constructor called" WH<< std::endl;
}

Animal	&Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << MAGENTA "Animal assignment operator called" WH<< std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << MAGENTA "Animal destructor called" WH<< std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << getType() << std::endl;
}
