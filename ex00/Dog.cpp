/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 00:07:12 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:13:40 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Dog Assignment Operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Bark Bark!" << std::endl;
}
