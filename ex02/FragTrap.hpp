/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 01:52:37 by ocviller          #+#    #+#             */
/*   Updated: 2026/01/11 01:53:42 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap(std::string name);
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &copy);
    FragTrap& operator=(const FragTrap &other);
    void attack(const std::string& target);
    void highFivesGuys(void);
};