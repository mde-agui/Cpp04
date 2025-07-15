/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 23:19:55 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/26 15:21:38 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
	std::cout << "AAnimal Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : type(other.type)
{
	std::cout << "AAnimal Copy Constructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "AAnimal Assignment Operator called" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (type);
}

/* void	AAnimal::makeSound() const
{
	std::cout << "*Animal sounds*" << std::endl;
} */