/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:09:15 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/09 15:32:07 by qais             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j; 	
	delete i;

	std :: cout << "\nWrong animal implementation\n" << std::endl;
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal* Wrongj = new WrongDog();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout << Wrongj->getType() << " " << std::endl;
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound();
	Wrongj->makeSound();
	Wrongmeta->makeSound();
	delete Wrongmeta;
	delete Wrongj;
	delete Wrongi;
	return (0);
}
