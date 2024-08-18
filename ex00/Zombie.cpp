/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 19:03:14 by hankhali          #+#    #+#             */
/*   Updated: 2024/06/28 19:06:49 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie \"" << _name << "\" created " << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie \"" << _name << "\" destroyed " << std::endl;
}
void Zombie::announce()
{
    std::cout <<_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}