/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:34:24 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 17:07:33 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "constructor default called" << std::endl;
    return ;
}

Serializer::Serializer(Serializer const &)
{
    return ;
} 

Serializer& Serializer::operator=(const Serializer& src)
{
    (void)src;
    return (*this);
}

Serializer::~Serializer(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

uintptr_t Serializer::serialize(Data *ptr)
{
    uintptr_t adrr = reinterpret_cast<uintptr_t>(ptr);
    return (adrr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    Data* data = reinterpret_cast<Data*>(raw);
    return (data);
}