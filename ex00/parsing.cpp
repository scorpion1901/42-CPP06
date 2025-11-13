/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:52:14 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 13:15:24 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

static int no_printable(std::string str)
{
    for (int i = 0; str[i] != 0; i++)
    {
        if (str[i] < 32 || str[i] > 126)
            return (0);
    }
    return (1);
}

static int more_of_2char(std::string str)
{
    if ((str[0] < 48 || str[0] > 57) && str[0] != '-' && str[0] != '+' && str[1])
        return (0);
    if ((str[0] == '-' || str[0] == '+') && str[1] == '\0')
        return (0);
    return (1);
}

static int check_inside(std::string str)
{
    for (int i = 1; str[i] != 0; i++)
    {
        if ((str[i] < 48 || str[i] > 57) && str[i] != '.')
        {
            int j = i;
            while ((str[j] > 47 && str[j] < 58) || str[i] == '.')
                j++;
            if (str[j] == '\0' || (str[j] == 'f' && str[j + 1] == '\0'))
                return (1);
            else
                return (0);
        }
    }
    return (1);
}

static void    SpecialCase(std::string str)
{
    if (str == "nanf")
    {
        std::cout << "char = impossible" << std::endl;
        std::cout << "int = impossible" << std::endl;
        std::cout << "float = nanf" << std::endl;
        std::cout << "double = nan" << std::endl;
    }
    else if (str == "nan")
    {
        std::cout << "char = impossible" << std::endl;
        std::cout << "int = impossible" << std::endl;
        std::cout << "float = nanf" << std::endl;
        std::cout << "double = nan" << std::endl;
    }
    else if (str == "+inff" || str == "+inf")
    {
        std::cout << "char = impossible" << std::endl;
        std::cout << "int = impossible" << std::endl;
        std::cout << "float = +inff" << std::endl;
        std::cout << "double = +inf" << std::endl;
    }
    else if (str == "-inff" || str == "-inf")
    {
        std::cout << "char = impossible" << std::endl;
        std::cout << "int = impossible" << std::endl;
        std::cout << "float = -inff" << std::endl;
        std::cout << "double = -inf" << std::endl;
    }
    exit(0);
}

int parsing(std::string str)
{
    if (!no_printable(str))
        return (0);
    if (str == "nanf" || str == "nan" || str == "+inff"
        || str == "+inf" || str == "-inff" || str == "-inf")
            SpecialCase(str);
    if (!more_of_2char(str))
        return (0);
    if (!check_inside(str))
        return (0);
    return (1);
}