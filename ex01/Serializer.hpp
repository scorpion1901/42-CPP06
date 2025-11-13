/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:31:05 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 13:33:24 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <cfloat>
#include <iomanip>


class Serializer {
private:
    Serializer();
    Serializer(Serializer const &);
    Serializer &operator=(Serializer const &);
    ~Serializer();

public:
    uintptr_t serialize(Data *ptr);
};

int parsing(std::string str);

#endif