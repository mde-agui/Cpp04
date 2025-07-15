/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:33:02 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/27 18:43:10 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		materias[i] = NULL;
	std::cout << "MateriaSource Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	for (int i = 0; i < 4; ++i)
		materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
	std::cout << "MateriaSource Copy Constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete materias[i];
			materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
		}
	}
	std::cout << "MateriaSource Assignment Operator called" << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete materias[i];
	std::cout << "MateriaSource Destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!materias[i])
		{
			materias[i] = m;
			std::cout	<< "Learned " << m->getType() << " in slot "
						<< i << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource full, unable to learn " << m->getType() << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]->clone());
	}
	std::cout << "Materia type: *" << type << "* unknown!" << std::endl;
	return (NULL);
}