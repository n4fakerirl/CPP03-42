/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:04:04 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 00:58:02 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hit_points(10), _energy_points(10), _attack_damage(0)
{
    this->setName(name);
    std::cout << "Default ClapTrap constructor " << this->getName() << " called\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor ClapTrap " << this->getName() << " called\n";
}

std::string ClapTrap::getName(void)
{
    return (this->_name);
}

void ClapTrap::setName(std::string name)
{
    this->_name = name;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " lacks energy points, can't attack!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is dead, can't attack! RIP\n";
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is already dead and can't take more damage! RIP\n";
        return ;
    }
    int tmp = (this->_hit_points - amount);
    if (tmp > 0)
        std::cout << "ClapTrap " << this->getName() << " takes damage causing " << amount << " points of damage!\n";
    else
        std::cout << "ClapTrap " << this->getName() << " died of the attack! RIP\n";
    this->_hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " lacks energy points, can't repair!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->getName() << " is already dead, too late to repair! RIP\n";
        return ;
    }
    this->_energy_points -= 1;
    this->_hit_points += amount;
    std::cout << "ClapTrap " << this->getName() << " is being repaired and gained " << amount << " hit points!\n";
}
