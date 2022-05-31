/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 02:35:01 by yhakkach          #+#    #+#             */
/*   Updated: 2022/05/17 15:48:41 by yhakkach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(int argc, char const *argv[])
{
	ClapTrap	tibo("tibo");
	ClapTrap	ennemy("ennemy");

	tibo.setAttackDammage(10);
	tibo.attack("ennemy");
	ennemy.takeDamage(10);
	ennemy.beRepaired(2);
	
	return 0;
}
