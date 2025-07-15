/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:14:05 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/27 18:53:06 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout	<< "AMateria Constructor called with type: " << type
				<< std::endl;
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
	std::cout << "AMateria Copy Constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		type = other.type;
	std::cout << "AMateria Assignment Operator called" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout	<< "AMateria base used on " << target.getName()
				<< std::endl;
}