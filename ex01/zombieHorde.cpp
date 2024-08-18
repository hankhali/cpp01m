/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:24:27 by hankhali          #+#    #+#             */
/*   Updated: 2024/06/30 19:25:43 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *zombieHorde;

    zombieHorde = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zombieHorde[i] = Zombie(name);
    }
    return (zombieHorde);
}