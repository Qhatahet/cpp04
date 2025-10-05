/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:52:07 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/05 15:19:10 by qhatahet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Animal	*animal[4];

	for (int i = 0; i < 2; i++)
		animal[i] = new Cat();
	for (int i = 0; i < 2; i++)
	{
		animal[i]->makeSound();
	}
	for (int i = 2; i < 4; i++)
		animal[i] = new Dog();
	for (int i = 2; i < 4; i++)
	{
		animal[i]->makeSound();
	}
	for (int i = 0; i < 4; i++)
		delete animal[i];
	
	Cat cat;
	cat.getBrain()->setIdeas(0, "orginal cat");
	Cat catCopy(cat);
	//catCopy.getBrain()->setIdeas(0, "copy cat");
	std::cout << "\norignal cat: " << cat.getBrain()->getIdea(0) << std::endl;
	//std::cout << "\ncopy cat: " << catCopy.getBrain()->getIdea(0) << std::endl;
	return (0);
}
