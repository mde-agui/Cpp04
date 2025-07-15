/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:51:12 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:13:51 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	std::cout << "Testing correct polymorphism:" << std::endl;
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	delete i;
	delete j;

	std::cout << "\nTesting wrong polymorphism:" << std::endl;
	const WrongAnimal	*k = new WrongCat();
	std::cout << k->getType() << std::endl;
	k->makeSound();
	delete k;

	std::cout << "\nAdditional tests:" << std::endl;
	Animal	*animals[4];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Dog();
	animals[3] = new Cat();

	for (int l = 0; l < 4; ++l)
	{
		std::cout	<< "Animal " << l << " type: "
					<< animals[l]->getType() << std::endl;
		animals[l]->makeSound();
		delete animals[l];
	}
	return (0);
}
