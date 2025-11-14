/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:21:35 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/14 20:34:34 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <string>
#include <iostream>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <typeinfo>


class Base {
    public:
        virtual ~Base();
        static Base*    generate(void);
        static void     identify(Base* p);
        static void     identify(Base& p);
};

class A : public Base 
{
    public:
        virtual ~A();
};

class B : public Base 
{
    public :
        virtual ~B();
};

class C : public Base 
{
    public :
        virtual ~C();
};

#endif