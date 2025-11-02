/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:38:14 by radlouni          #+#    #+#             */
/*   Updated: 2025/10/31 15:57:17 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "constructor default called" << std::endl;
    return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &)
{
    return ;
} 

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
{
    return ;
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

void ScalarConverter::convert(std::string const &literal)
{
    void*    a = reinterpret_cast<void *>(&literal);

    
}

void    ScalarConverter::convert_to_char(std::string const &literal)
{
    
}

void    ScalarConverter::convert_to_int(std::string const &literal)
{
    int* a = reinterpret_cast<int*>(&literal);
}