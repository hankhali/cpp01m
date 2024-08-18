/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:15:56 by hankhali          #+#    #+#             */
/*   Updated: 2024/06/28 19:17:29 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *newZombie1;

    newZombie1 = newZombie("New Zombie");
    newZombie1->announce();
    randomChump("Random Zombie");
    delete newZombie1;
    return (0);
}