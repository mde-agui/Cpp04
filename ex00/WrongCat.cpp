/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:48:03 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/24 22:48:06 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat Copy Constructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAnimal::operator=(other);
	std::cout << "WrongCat Assignment Operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Ribbit Ribbit!" << std::endl;
}