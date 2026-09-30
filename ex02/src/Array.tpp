/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cycolonn <cycolonn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 12:00:21 by cycolonn          #+#    #+#             */
/*   Updated: 2026/09/30 14:43:01 by cycolonn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

template<typename T>
Array<T>::Array() : _elements(NULL) , _size(0)
{
}


template<typename T>
Array<T>::Array(const Array &src) : _elements(new T[src._size]) , _size(src._size)
{
    for (unsigned int i = 0; i < _size; i++)
        _elements[i] = src._elements[i];
}


template<typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n)
{
}


template<typename T>
Array<T>::~Array()
{
    delete[] _elements; 
}


template<typename T>
Array<T>& Array<T>::operator=(const Array &rhs)
{
    if (this != &rhs)
    {
        if (_elements)
            delete[] _elements;
        _size = rhs._size;
        _elements = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _elements[i] = rhs._elements[i];
        
    }
    return *this;
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
    if (index >= _size)
        throw std::out_of_range(BL_RED "Error: index out of bounds" RESET);
    else 
        return _elements[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size)
        throw std::out_of_range(BL_RED "Error: index out of bounds" RESET);
    else 
        return _elements[index];
}

template<typename T>
unsigned int Array<T>::size() const
{
    return _size;
}