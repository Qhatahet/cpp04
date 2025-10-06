/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:23:15 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/06 14:24:33 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	brain = new Brain();
	if (!brain)
	{
		std::cout << "failed to allocate brain for dog" << std::endl;
		return ;
	}
	std::cout <<BLUE "Dog default constructor called" WH<< std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	this->brain = new Brain();
	if (!brain)
	{
		std::cout << "failed to allocate brain for dog" << std::endl;
		return ;
	}
	std::cout <<BLUE "Dog copy constructor called" WH<< std::endl;
}

Dog	&Dog::operator=(const Dog &obj)
{
	Animal::operator=(obj);
	brain = new Brain(*obj.brain);
	if (!brain)
	{
		std::cout << "failed to allocate brain for dog" << std::endl;
	}
	std::cout <<BLUE "Dog assignment operator called" WH<< std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout <<BLUE "Dog destructor called" WH<< std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void	Dog::setBrain(Brain *obj)
{
	this->brain = obj;
}

Brain	*Dog::getBrain() const
{
	return (brain);
}
