/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:27:54 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/29 16:10:33 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T, typename F> void iter( T *array, size_t size, F function)
{
    if (array == NULL || function == NULL)
        return ;
    for(size_t i = 0; i < size; i++)
        function(array[i]);
}

#endif