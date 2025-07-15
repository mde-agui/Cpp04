/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:29:32 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/27 23:13:59 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/* int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n" << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n" << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n" << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	delete bob;
	delete me;
	delete src;

	return 0;
} */

/* //Equip edge case
int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n" << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n" << std::endl;

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n" << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	delete bob;
	delete me;
	delete src;

	return (0);
} */

/* //Unequip edge case
int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n" << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n" << std::endl;

	ICharacter* bob = new Character("bob");

	me->unequip(0);
	me->use(0, *bob);
	me->unequip(-1);
	me->unequip(4);
	me->unequip(0);
	
	delete bob;
	delete me;
	delete src;

	return (0);
} */

/* //Deep copy test
int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n" << std::endl;

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << "\n" << std::endl;

	ICharacter* bob = new Character("bob");
	me->unequip(0);
	Character*	copy = new Character(*dynamic_cast<Character*>(me));
	copy->use(1, *bob);
	tmp = src->createMateria("ice");
	copy->equip(tmp);
	copy->use(0, *bob);
	me->use(0, *bob);

	delete copy;
	delete bob;
	delete me;
	delete src;

	return (0);
} */

/* //MateriaSource edge case
int	main(void)
{
	IMateriaSource*	src = new MateriaSource();
	
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());

	AMateria*	tmp;
	tmp = src->createMateria("fire");

	delete src;
	return (0);
} */

//Deep copy of MateriaSource
int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "\n" << std::endl;

	ICharacter* me = new Character("me");
	std::cout << "\n" << std::endl;

	ICharacter* bob = new Character("bob");
	
	MateriaSource* srcCopy = new MateriaSource(*dynamic_cast<MateriaSource*>(src));
	AMateria* tmp;
	
	tmp = srcCopy->createMateria("ice");
	ICharacter*	mage = new Character("mage");
	mage->equip(tmp);
	mage->use(0, *bob);
	
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->use(0, *bob);

	delete mage;
	delete srcCopy;
	delete bob;
	delete me;
	delete src;

	return (0);
}
