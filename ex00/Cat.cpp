/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 00:38:23 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:13:32 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		Animal::operator=(other);
	std::cout << "Cat Assignment Operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}
