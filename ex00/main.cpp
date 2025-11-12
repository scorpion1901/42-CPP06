/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:37:35 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/12 19:58:57 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

double toDouble(const std::string& str)
{
    std::stringstream ss(str);
    double d;
    ss >> d;
    if (ss.fail())
    {
        std::cout << "conversion to double fail" << std::endl;
    }
    return d;
}

int whats_the(std::string str)
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



int main(void)
{
    std::string cmd;
    int nb = 0;
    double nb2 = 0;
    
    if (!std::getline(std::cin, cmd))
        std::exit(1);
    if (!parsing(cmd))
    {
        std::cout << "probleme parsing" << std::endl;
        return (0);
    }
    if ((cmd[0] < 48 || cmd[0] > 57) && cmd[1] == '\0')
        nb2 = static_cast<int>(cmd[0]);
    else if (whats_the(cmd) == 1 || whats_the(cmd) == 2)
    {
        nb2 = toDouble(cmd);
    }
    else if (whats_the(cmd) == 0)
    {
        std::cout << "too much charactere" << std::endl;
        return (0);
    }
    else
        nb2 = std::atoi(cmd.c_str());
    if (nb2 == 0.0)
    {
        std::cout << "char = Non displayable" << std::endl;
        std::cout << "int = 0" << std::endl;
        std::cout << "float = 0.0f" << std::endl;
        std::cout << "double = 0.0" << std::endl;
    }
    else
    {
        if (nb2 > 32 && nb2 < 127)
            std::cout << "char = " << static_cast<char>(nb2) << std::endl;
        else if (nb > 127 || nb < 0)
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
            std::cout << "float = " << static_cast<float>(nb2) << "f" << std::endl;
        if (nb2 > DBL_MAX || nb2 < -DBL_MAX)
            std::cout << "double = impossible" << std::endl;
        else
            std::cout << "double = " << nb2 << std::endl;
    }
    return (0);
}
