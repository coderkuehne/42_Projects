/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kekuhne <kekuhne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:21:57 by Kekuhne           #+#    #+#             */
/*   Updated: 2024/03/06 14:04:58 by kekuhne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"


int main()
{
	std::cout << "\033[1;32mLearning Materia\033[0m\n";
	IMateriaSource *src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << "\033[1;31mShould fail. 4/4 learned\033[0m\n";
	src->learnMateria(new Cure());


	ICharacter *me = new Character("me");
	AMateria *tmp;

	std::cout<< "\n\n";

	std::cout << "\033[1;32mCreating Materia and Filling Slots\033[0m\n";
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout<< "\n";
	std::cout << "\033[1;31mShould`nt equip cause slots are full\033[0m\n";
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout<< "\n\n";

	std::cout << "\033[1;31mUnequiping non existent Slot should fail \033[0m\n";
	me->unequip(5);
	
	std::cout<< "\n";
	ICharacter *bob = new Character("bob");
	std::cout<< "\n";
	
	std::cout << "\033[1;32mUsing Materia on bob.\033[0m\n";
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout<< "\n";
	std::cout << "\033[1;31mShould fail cause not equiped\033[0m\n";
	me->unequip(3);
	me->use(3, *bob);
	me->use(4, *bob);
	std::cout<< "\n";
	delete bob;
	delete me;
	delete src;
	return (0);
}
