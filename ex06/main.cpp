/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 20:17:23 by hankhali          #+#    #+#             */
/*   Updated: 2024/07/02 20:20:14 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av)
{
    Harl hrl;

    if (ac == 2)
        hrl.complain(av[1]);
    else
    {
        std::string inp;
        std::cout << "Please enter a status: ";
        std::cin >> inp;
        hrl.complain(inp);
    }
    return (0);
}