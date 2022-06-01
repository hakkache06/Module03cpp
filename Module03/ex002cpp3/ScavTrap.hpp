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

#ifndef ScavTrap_HPP
 #define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    private:
        
    public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        
		ScavTrap	&	operator=(ScavTrap const & rhs);

        void            guardGate(void);

};

#endif