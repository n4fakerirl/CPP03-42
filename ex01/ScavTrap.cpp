/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:29:59 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 00:59:39 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Default ScavTrap constructor " << this->getName() << " called\n";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->setName(name);
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap " << this->getName() << " called\n";
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode !\n";
}
