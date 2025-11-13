/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:38:14 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 13:24:57 by radlouni         ###   ########.fr       */
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
    (void)src;
    return (*this);
}

ScalarConverter::~ScalarConverter(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}



static int whats_the(std::string str)
{
    int i = 0;
    int tab[256] = {0};
    while (str[i] != '\0')
    {
        if (str[i] == '.' && tab[static_cast<int>(str[i])] == 0)
            tab[static_cast<int>(str[i])] = 1;
        else if (str[i] == '.' && tab[static_cast<int>(str[i])] == 1)
            return (0);
        else if (str[i] == 'f' && str[i + 1] == '\0')
            return (2);
        i++;
    }
    if (str[i] == '\0')
        return (1);
    
    return (0);
}

void ScalarConverter::convert(const char* cmd)
{
    double nb2 = 0;
    
    if (!parsing(cmd))
    {
        std::cout << "probleme parsing" << std::endl;
        return ;
    }
    if ((cmd[0] < 48 || cmd[0] > 57) && cmd[1] == '\0')
        nb2 = static_cast<int>(cmd[0]);
    else if (whats_the(cmd) == 0)
    {
        std::cout << "too much charactere" << std::endl;
        return ;
    }
    else
        nb2 = strtod(cmd, NULL);
    if (nb2 > 32 && nb2 < 127)
        std::cout << "char = " << "'" << static_cast<char>(nb2) << "'" << std::endl;
    else if (nb2 > 127 || nb2 < 0)
        std::cout << "char = impossible" << std::endl;
    else
        std::cout << "char = Non displayable" << std::endl;
    if (nb2 > INT_MAX || nb2 < INT_MIN)
        std::cout << "int = impossible" << std::endl;
    else
        std::cout << "int = " << static_cast<int>(nb2) << std::endl;
    if (nb2 > FLT_MAX || nb2 < -FLT_MAX)
        std::cout << "float = impossible" << std::endl;
    else
        std::cout << "float = " << std::fixed << std::setprecision(2) << std::showpoint << static_cast<float>(nb2) << "f" << std::endl;
    if (nb2 > DBL_MAX || nb2 < -DBL_MAX)
        std::cout << "double = impossible" << std::endl;
    else
        std::cout << "double = " << std::fixed << std::setprecision(2) << std::showpoint << nb2 << std::endl;
    return ;
}
