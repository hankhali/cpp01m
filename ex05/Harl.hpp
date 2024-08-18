/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hankhali <hankhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:17:57 by hankhali          #+#    #+#             */
/*   Updated: 2024/07/02 19:19:24 by hankhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl
{
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    typedef void (Harl::* harl_func_t)(void);
};

#endif

//function pointers
