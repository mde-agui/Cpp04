/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 23:19:55 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:13:21 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
	std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "Animal Assignment Operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "*Animal sounds*" << std::endl;
}
