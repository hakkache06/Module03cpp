/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:05:57 by yhakkach          #+#    #+#             */
/*   Updated: 2022/05/31 15:41:24 by yhakkach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_H
 #define ClapTrap_H

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDammage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap	&	operator=(ClapTrap const & rhs);

	void 		attack(std::string const & target);
	void 		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	std::string	getName(void) ;
	void		setName( std::string name);
	int			getHitPoints(void) ;
	void		setHitPoints( int hitPoints);
	int			getEnergyPoints(void) const;
	void		setEnergyPoints( int energyPoints);
	int			getAttackDammage(void) const ;
	void		setAttackDammage(int attackDammage);
};




#endif