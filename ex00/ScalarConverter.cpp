/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:38:14 by radlouni          #+#    #+#             */
/*   Updated: 2025/10/30 17:01:46 by radlouni         ###   ########.fr       */
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