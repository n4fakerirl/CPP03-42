/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 20:23:36 by ocviller          #+#    #+#             */
/*   Updated: 2026/02/10 13:26:48 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;
    ClapTrap a("Nova");

    std::cout << "\n===== ATTACK =====" << std::endl;
    a.attack("Emily");
    a.attack("Emily");

    std::cout << "\n===== TAKE DAMAGE =====" << std::endl;
    a.takeDamage(3);
    a.takeDamage(20);

    std::cout << "\n===== REPAIR =====" << std::endl;
    a.beRepaired(5);

    std::cout << "\n===== ENERGY =====" << std::endl;
    ClapTrap b("Energy");
    for (int i = 0; i < 11; i++)
        b.attack("Nova");
    std::cout << "\n===== DEAD =====" << std::endl;
    ClapTrap c("Dead");
    c.takeDamage(10);
    c.attack("Lea");
    c.beRepaired(5);

    std::cout << "\n===== DESTRUCTORS =====" << std::endl;
    return 0;
}
