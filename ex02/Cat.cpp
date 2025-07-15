/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 00:38:23 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/26 15:22:34 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	brain = new Brain();
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		AAnimal::operator=(other);
		delete brain;
		brain = new Brain(*other.brain);
	}
	std::cout << "Cat Assignment Operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return (brain);
}