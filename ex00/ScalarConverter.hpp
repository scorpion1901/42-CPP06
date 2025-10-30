/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 10:38:34 by radlouni          #+#    #+#             */
/*   Updated: 2025/10/30 16:56:14 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>

class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(ScalarConverter const &);
    ScalarConverter &operator=(ScalarConverter const &);
    ~ScalarConverter();

public:
    static void convert(std::string const &literal);
};

#endif