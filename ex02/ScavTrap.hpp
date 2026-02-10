/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 00:30:12 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 01:39:44 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
    ScavTrap(std::string name);
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &copy);
    ScavTrap& operator=(const ScavTrap &other);
    void guardGate();
    //void printscav(void);
    void attack(const std::string& target);
};