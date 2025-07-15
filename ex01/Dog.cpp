/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 00:07:12 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:09:19 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	brain = new Brain();
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Dog Assignment Operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bark Bark!" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return (brain);
}