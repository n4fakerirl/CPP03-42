/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 01:52:43 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/30 11:22:23 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap constructor called\n";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor " << this->getName() << " called\n";
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    this->setName(name);
}
FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap " << this->getName() << " called\n";
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
	std::cout << "Copy Constructor called of FragTrap\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other)
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

void FragTrap::attack(const std::string& target)
{
    if (this->_energy_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " lacks energy points, can't attack!\n";
        return ;
    }
    else if (this->_hit_points <= 0)
    {
        std::cout << "FragTrap " << this->_name << " is dead, can't attack! RIP\n";
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " requests a positive high five!\n";
}
