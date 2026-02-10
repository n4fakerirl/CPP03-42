/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:23:36 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/10 13:31:52 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

int main(void)
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;
    ClapTrap a("Nova");
    ScavTrap test("Molly");

    // std::cout << "===== START STATS =====" << std::endl;
    // a.printclap();
    // test.printscav();

    std::cout << "\n===== ATTACK =====" << std::endl;
    a.attack("Enemy");
    test.attack("Enemy");

    std::cout << "\n===== TAKE DAMAGE =====" << std::endl;
    a.takeDamage(3);
    test.takeDamage(20);

    std::cout << "\n===== REPAIR =====" << std::endl;
    a.beRepaired(5);
    test.beRepaired(5);

    std::cout << "\n===== ENERGY =====" << std::endl;
    ClapTrap b("Energy");
    for (int i = 0; i < 11; i++)
        b.attack("Nova");
    std::cout << "\n===== DEAD =====" << std::endl;
    ClapTrap c("Dead");
    c.takeDamage(10);
    c.attack("Nova");
    c.beRepaired(5);

    std::cout << "\n===== SPECIAL =====" << std::endl;
    test.guardGate();

    std::cout << "\n===== DESTRUCTORS =====" << std::endl;
    return 0;
}
