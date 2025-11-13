/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:31:05 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 17:18:07 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>
#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <cfloat>
#include <iomanip>

struct Data
{
    int         age;
    std::string name;
};

class Serializer {
private:
    Serializer();
    Serializer(Serializer const &);
    Serializer &operator=(Serializer const &);
    ~Serializer();

public:
    static uintptr_t   serialize(Data *ptr);
    static Data*       deserialize(uintptr_t raw);
};

#endif