/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:12:42 by qais              #+#    #+#             */
/*   Updated: 2025/10/09 15:27:14 by qais             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	type = "WrongDog";
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &obj) : WrongAnimal(obj)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog	&WrongDog::operator=(const WrongDog &obj)
{
	WrongAnimal::operator=(obj);
	std::cout << "WrongDog assignment operator called" << std::endl;
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

void	WrongDog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}