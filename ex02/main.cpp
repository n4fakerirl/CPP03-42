/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:23:36 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 01:58:56 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// void ScavTrap::printscav(void)
// {
//     std::cout << "-    ScavTrap  -" << std::endl;
//     std::cout << "- HIT POINTS " << this->_hit_points << "\n";
//     std::cout << "- ENERGY POINTS " << this->_energy_points << "\n";
//     std::cout << "- ATTACK DAMAGE " << this->_attack_damage << "\n";
// }

// void ClapTrap::printclap(void)
// {
//     std::cout << "-    ClapTrap  -" << std::endl;
//     std::cout << "- HIT POINTS " << this->_hit_points << "\n";
//     std::cout << "- ENERGY POINTS " << this->_energy_points << "\n";
//     std::cout << "- ATTACK DAMAGE " << this->_attack_damage << "\n";
// }

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(void)
{
    std::cout << "========== EX00 : ClapTrap ==========" << std::endl;

    ClapTrap clap("CL4P");
    clap.attack("target dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(20);
    clap.attack("another target");
    std::cout << std::endl;
    
    std::cout << "========== EX01 : ScavTrap ==========" << std::endl;

    ScavTrap scav("SC4V");
    scav.attack("intruder");
    scav.takeDamage(30);
    scav.beRepaired(10);
    scav.guardGate();
    std::cout << std::endl;
    
    std::cout << "========== EX02 : FragTrap ==========" << std::endl;

    FragTrap frag("FR4G");
    frag.attack("evil robot");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();
    std::cout << std::endl;
    
    std::cout << "========== ENERGY TEST ==========" << std::endl;

    FragTrap tired("TIRED");
    for (int i = 0; i < 101; i++)
        tired.attack("nothing");
    std::cout << std::endl;
    
    std::cout << "========== END OF MAIN ==========" << std::endl;
    return 0;
}
