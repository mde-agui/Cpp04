/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:23:50 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/26 17:39:03 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice Copy Constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	if (this != &other)
		AMateria::operator=(other);
	std::cout << "Ice Assignment Operator called" << std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}

AMateria*	Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName() << " *" << std::endl;
}
