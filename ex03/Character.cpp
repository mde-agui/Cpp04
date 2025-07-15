/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:06:20 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/27 22:50:47 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name(), unequipCount(0)
{
	std::cout << "Character Default Constructor called" << std::endl;
}

Character::Character(std::string const &name) : name(name), unequipCount(0)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	for (int i = 0; i < 100; ++i)
		unequipped[i] = NULL;
	std::cout << "Character Constructor called for " << name << std::endl;
}

Character::Character(const Character& other) : name(other.name), unequipCount(0)
{
	for (int i = 0; i < 4; ++i)
		inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
	for (int i = 0; i < 100; ++i)
		unequipped[i] = NULL;
	std::cout << "Character Copy Constructor called" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];
			inventory[i] = other.inventory[i] ? other.inventory[i]->clone() : NULL;
		}
		for (int i = 0; i < unequipCount; ++i)
		{
			delete unequipped[i];
			unequipped[i] = NULL;
		}
		unequipCount = 0;
	}
	std::cout << "Character Assignment Operator called" << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		delete inventory[i];
	for (int i = 0; i < unequipCount; ++i)
		delete unequipped[i];
	std::cout << "Character Destructor called" << std::endl;
}

std::string const	&Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << name << " equipped " << m->getType() << " in slot " << i << std::endl;
			return ;
		}
	}
	std::cout	<< "You're over encumbered, you are carrying too much to be able to run!"
				<< m->getType() << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4 || !inventory[idx])
		return ;
	if (unequipCount < 100)
	{
		unequipped[unequipCount++] = inventory[idx];
		std::cout	<< name <<" unequipped " << inventory[idx]->getType()
					<< " from slot " << idx << std::endl;
	}
	inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4 || !inventory[idx])
	{
		std::cout << name << " unable to use, slot " << idx << " is empty " << std::endl;
		return ;
	}
	inventory[idx]->use(target);
}