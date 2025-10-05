/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:22:36 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/05 15:22:18 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	brain = new Brain();
	if (!brain)
	{
		std::cout << "failed to allocate brain for cat" << std::endl;
		return ;
	}
	std::cout <<YELLOW "Cat default constructor called" WH<< std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	Brain *newbrain = new Brain();
	if (!newbrain)
	{
		std::cout << "failed to allocate brain for cat" << std::endl;
		return ;
	}
	newbrain = brain;
	std::cout <<YELLOW "Cat copy constructor called" WH<< std::endl;
}

Cat	&Cat::operator=(const Cat &obj)
{
	brain = new Brain();
	if (!brain)
	{
		std::cout << "failed to allocate brain for cat" << std::endl;
	}
	Animal::operator=(obj);
	std::cout <<YELLOW "Cat assignment operator called" WH<< std::endl;
	return (*this);
}

Cat::~Cat()
{
	if (brain)
		delete brain;
	std::cout <<YELLOW "Cat destructor called" WH<< std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::setBrain(Brain *obj)
{
	this->brain = obj;
}

Brain	*Cat::getBrain() const
{
	return (brain);
}
