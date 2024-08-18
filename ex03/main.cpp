/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 19:01:30 by hankhali          #+#    #+#             */
/*   Updated: 2024/07/01 19:35:38 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    Weapon club = Weapon("crude spiked club");
    HumanA alice("Alice", club);
    alice.attack();
    club.setType("some other type of club");
    alice.attack();
    
    Weapon club2 = Weapon("crude spiked club");
    HumanB bob("Bob");
    bob.attack();
    bob.setWeapon(club2);
    bob.attack();
    club2.setType("some other type of club");
    bob.attack();

    return 0;
}
