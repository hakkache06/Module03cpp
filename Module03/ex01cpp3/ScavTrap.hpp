/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhakkach <yhakkach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 23:07:53 by yhakkach          #+#    #+#             */
/*   Updated: 2022/05/31 15:29:34 by yhakkach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_H
 #define ScavTrap_H

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();

	ScavTrap	&	operator=(ScavTrap const & rhs);
    void    guardGate();

};




#endif