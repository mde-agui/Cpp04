/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:03:04 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:03:06 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal Copy Constructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "WrongAnimal Assignment Operator called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Wrong animal sounds*" << std::endl;
}