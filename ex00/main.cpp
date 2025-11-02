/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:37:35 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/02 20:38:43 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int whats_the(std::string str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 47 && str[i] < 58)
        {
            i++;
        }
        else if (str[i] == 'f' && str[i + 1] == '\0')
            return (2);
        else
            break;
    }
    if (str[i] == '\0')
        return (1);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] > 47 && str[i] < 58 || str[i] == '.')
        {
            i++;
        }
        else if (str[i] == 'f' && str[i + 1] == '\0')
            return (2);
        else
            break;
    }
    i = 0;
    while (str[i] != '\0')
    {
         if (str[i] < 48 && str[i] > 57)
        {
            i++;
        }
    }
    if (str[i] == '\0')
        return (3);
    return (0);
}


int main(void)
{
    std::string cmd;
    int choice;
    int nb;
    float   nb2;
    
    if (!std::getline(std::cin, cmd))
        std::exit(1);
    choice = whats_the(cmd);
    if (choice == 1)
    {
        nb = std::atoi(cmd.c_str());
        if (nb == 0)
        {
            std::cout << "char = Non displayable" << std::endl;
            std::cout << "int = 0" << std::endl;
            std::cout << "float = 0.0f" << std::endl;
            std::cout << "double = 0.0" << std::endl;
        }
        else if (nb > 126 || nb < 0)
        {
            std::cout << "char = impossible" << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << static_cast<float>(nb) << std::endl;
            std::cout << "double = " << static_cast<double>(nb) << std::endl;
        }
        else
        {
            std::cout << "char = " << static_cast<char>(nb) << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << static_cast<float>(nb) << std::endl;
            std::cout << "double = " << static_cast<double>(nb) << std::endl;
        }
    }
    else if (choice == 2)
    {
        nb2 = std::atof(cmd.c_str());
        nb = static_cast<int>(nb2);
        if (nb2 == 0.0f)
        {
            std::cout << "char = impossible" << std::endl;
            std::cout << "int = 0" << std::endl;
            std::cout << "float = 0.0f" << std::endl;
            std::cout << "double = 0.0" << std::endl;
        }
        else if (nb > 126 || nb < 0)
        {
            std::cout << "char = impossible" << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << nb2 << std::endl;
            std::cout << "double = " << static_cast<double>(nb2) << std::endl;
        }
        else
        {
            std::cout << "char = " << static_cast<char>(nb) << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << nb2 << std::endl;
            std::cout << "double = " << static_cast<double>(nb2) << std::endl;
        }
    }
        
    for(int i = 0; cmd[i] != '\0'; i++)
    {
        
    }
        
    
    
    
    return (0);
}