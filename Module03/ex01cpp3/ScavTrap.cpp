/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 13:54:06 by yhakkach          #+#    #+#             */
/*   Updated: 2022/05/31 18:27:43 by yhakkach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout<< getName()<< "is alive !"<< std::endl;   
}

ScavTrap::ScavTrap(std::string n)
{
    name = n;
    hitPoints=100;
    energyPoints=500;
    attackDammage = 20;
    
}

ScavTrap::~ScavTrap()
{
	std::cout <<getName() << " died" << std::endl;
}

ScavTrap &	ScavTrap::operator= (ScavTrap const & src)
{	
	if (&src == this)
		return *this;
	setName(src.name);
	setAttackDammage(src.attackDammage);
	setEnergyPoints(src.energyPoints);
	setHitPoints(src.hitPoints);
	return *this;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
	std::cout << getName() << " is alive !" << std::endl;
}


void	ScavTrap::guardGate()
{
	std::cout << " mode Gate keeper" <<std::endl;
}