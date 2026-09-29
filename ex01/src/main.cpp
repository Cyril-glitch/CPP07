/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:34:40 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/29 16:06:24 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"
#include "../inc/colors.hpp"

#include <iostream>
#include <string>

void increment(int &a)
{
    a++;
}

void displayChar(const char &a)
{
    std::cout << a << std::endl;
}

int main(void)
{
    {
        std::cout << LIME << "\n" << "<<<TEST MUTABLE VALUE>>>" RESET << "\n\n";
        
        int tab[5] = {0, 1, 2, 3, 4};

        ::iter(tab, 5, increment);

        for (size_t i = 0; i < 5; i++)
            std::cout << tab[i] << std::endl;
    }

    std::cout << "\n" << "----------------------------------------------" << "\n\n"; 

    {
        std::cout << LIME << "<<<TEST CONST VALUE>>>" RESET << "\n\n";
         
        const char *s = "Hello world!";

        ::iter(s, 12, displayChar);
        
    }
        return 0;
}