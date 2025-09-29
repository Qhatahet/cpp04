/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:54:43 by qhatahet          #+#    #+#             */
/*   Updated: 2025/09/29 21:57:17 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{}

Dog::Dog(const Dog &obj) : Animal(obj)
{}

Dog	&Dog::operator=(const Dog &obj)
{
	return (*this);
}

Dog::~Dog()
{
}
