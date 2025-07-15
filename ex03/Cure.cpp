/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 18:16:35 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/26 18:20:15 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure Copy Constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);
	std::cout << "Cure Assignment Operator called" << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout	<< "* heals " << target.getName()
				<< "'s wounds *" << std::endl;
}
