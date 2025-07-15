/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:15:38 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/26 15:36:26 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	//Animal*	animal = new Animal();
	const int	size = 4;
	Animal*		animals[size];

	for (int i = 0; i < size; ++i)
	{
		if (i < size / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	for (int i = 0; i < size; ++i)
	{
		std::cout	<< "Animal " << i << " type: "
					<< animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}

	std::cout << "\nTesting deep copy:" << std::endl;
	Dog	dog1;
	dog1.getBrain()->setIdea(0, "Chase tail");
	Dog	dog2 = dog1;
	dog2.getBrain()->setIdea(0, "Barks loudly");
	std::cout << "Dog1 idea: " << dog1.getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(0) << std::endl;

	for (int i = 0; i < size; ++i)
		delete animals[i];
	//delete animal;
	return (0);
}