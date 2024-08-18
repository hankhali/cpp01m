/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:25:52 by hankhali          #+#    #+#             */
/*   Updated: 2024/06/30 19:27:45 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;
    int N = 3;

    horde = zombieHorde(N, "Horde");
    for (int i = 0; i < N; i++)
    {
        std::cout << " Index " << i << " : ";
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}