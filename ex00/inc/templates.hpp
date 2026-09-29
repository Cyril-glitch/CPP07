/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:14:20 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/29 14:37:14 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  TEMPLATES_HPP
#define  TEMPLATES_HPP

template<typename T > T max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}


template<typename T > T min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

template<typename T > void swap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif
