/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 18:49:45 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/09 15:11:00 by qais             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	*this = obj;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}
