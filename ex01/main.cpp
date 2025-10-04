/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:52:07 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/04 18:46:41 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	**animal;

	animal = new Animal*[10];
	for (int i = 0; i < 5; i++)
		animal[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animal[i] = new Dog();
	for (int i = 0; i < 10; i++)
	{
		delete animal[i];
	}
	delete[] animal;
	return (0);
}
