/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhatahet <qhatahet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:52:07 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/06 16:00:40 by qhatahet         ###   ########.fr       */
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
	
	Dog dog;
	dog.getBrain()->setIdeas(0, "orginal dog");
	Dog dogCopy(dog);
	dogCopy.getBrain()->setIdeas(0, "copy dog");
	std::cout << "\ncopy dog: " << dogCopy.getBrain()->getIdea(0) << std::endl;
	std::cout << "\norignal dog: " << dog.getBrain()->getIdea(0) << std::endl;
	
	return (0);
}
