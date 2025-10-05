/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 19:26:02 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/05 15:15:16 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "";
	std::cout <<GREEN "Brain default constructor called" WH<< std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout <<GREEN "Brain copy constructor called" WH<< std::endl;
}

Brain	&Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = obj.ideas[i];
	}
	std::cout <<GREEN "Brain assignment operator called" WH<< std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout <<GREEN "Brain destructor called" WH<< std::endl;
}

void	Brain::setIdeas(int i, std::string idea)
{
	this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
