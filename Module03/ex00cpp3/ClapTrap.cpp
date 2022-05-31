/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:06:30 by yhakkach          #+#    #+#             */
/*   Updated: 2022/05/31 15:41:29 by yhakkach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << getName() << " is alive !" << std::endl;
}


ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << getName() << " is alive !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout <<getName() << " died" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
	std::cout << getName() << " is alive !" << std::endl;
}

ClapTrap &	ClapTrap::operator= (ClapTrap const & src)
{	
	if (&src == this)
		return *this;
	setName(src.name);
	setAttackDammage(src.attackDammage);
	setEnergyPoints(src.energyPoints);
	setHitPoints(src.hitPoints);
	return *this;
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap <" << getName() << "> attacks <" << target << ">, causing <"<< getAttackDammage() << "> points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << getName() << " lose : " << amount << " points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << getName() << " repairs : " << amount << " points" << std::endl;
}

std::string	ClapTrap::getName(void) 
{
	return name;
}

void		ClapTrap::setName(const std::string name)
{
	this->name = name;
}

int			ClapTrap::getHitPoints(void) 
{
	return hitPoints;
}

void		ClapTrap::setHitPoints( int hitPoints)
{
	energyPoints = hitPoints;
}

int			ClapTrap::getEnergyPoints(void) const
{
	return energyPoints;
}

void		ClapTrap::setEnergyPoints( int energyPoints)
{
	energyPoints = energyPoints;
}

int			ClapTrap::getAttackDammage(void) const
{
	return attackDammage;
}

void		ClapTrap::setAttackDammage(int attackDammage)
{
	attackDammage = attackDammage;
}