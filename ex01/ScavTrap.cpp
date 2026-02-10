/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:29:59 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/10 13:30:47 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default ScavTrap constructor called\n";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap constructor " << this->getName() << " called\n";
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    this->setName(name);
}
ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap " << this->getName() << " called\n";
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "Copy Constructor called of ScavTrap\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
    {
        this->_name = other._name;
        this->_attack_damage = other._attack_damage;
        this->_energy_points = other._energy_points;
        this->_hit_points = other._hit_points;
    }
	return (*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode !\n";
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " lacks energy points, can't attack!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead, can't attack! RIP\n";
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
}
