/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:02:15 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/25 22:02:18 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = "idea " + std::string(1, 'A' + (i % 26));
	std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < 100; ++i)
		ideas[i] = other.ideas[i];
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
	}
	std::cout << "Brain Assignment Operator called" << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

void	Brain::setIdea(int i, const std::string& idea)
{
	if (i >= 0 && i < 100)
		ideas[i] = idea;
	return ;
}

std::string	Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (ideas[i]);
	return ("");
}