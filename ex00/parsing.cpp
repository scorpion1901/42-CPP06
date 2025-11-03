/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:52:14 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/03 21:35:46 by radlouni         ###   ########.fr       */
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
    if ((str[0] < 48 || str[0] > 57) && str[1])
        return (0);
    return (1);
}

int parsing(std::string str)
{
    if (!no_printable(str))
        return (0);
    if (!more_of_2char(str))
        return (0);
    return (1);
}