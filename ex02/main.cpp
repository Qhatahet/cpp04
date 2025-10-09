/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qais <qais@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 21:51:54 by qhatahet          #+#    #+#             */
/*   Updated: 2025/10/09 15:10:13 by qais             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	
	dog->makeSound();
	cat->makeSound();
	
	delete dog;
	delete cat;	
	return (0);
}
