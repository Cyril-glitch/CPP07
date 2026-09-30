/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:01:11 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/30 14:22:59 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <cstddef>
#include <stdexcept>
#include "colors.hpp"


template<typename T>
class Array  
{
    public :
        Array();
        Array(const Array &src);
        Array(unsigned int n);
        ~Array();        

        Array& operator=(const Array & rhs);

        T& operator[](unsigned int index);

        const T& operator[](unsigned int index) const;

        unsigned int size() const;

    private : 

        T* _elements;
        unsigned int _size;
};

#include "../src/Array.tpp"

#endif