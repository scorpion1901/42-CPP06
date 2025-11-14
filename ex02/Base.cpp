/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 18:49:50 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/14 20:55:59 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(void)
{
    std::cout << "Destructor of Base called" << std::endl;
    return ;
}

A::~A(void)
{
    std::cout << "Destructor of A called" << std::endl;
    return ;
}

B::~B(void)
{
    std::cout << "Destructor of B called" << std::endl;
    return ;
}

C::~C(void)
{
    std::cout << "Destructor of C called" << std::endl;
    return ;
}

Base*    Base::generate(void)
{
    int random = std::rand() % 3;

    switch (random)
    {
        case 0:
            std::cout << "Base A choose" << std::endl;
            return (new A());
        case 1:
            std::cout << "Base B choose" << std::endl;
            return (new B());
        case 2:
            std::cout << "Base C choose" << std::endl;
            return (new C());
        default:
            return (NULL);
    }
}
void     Base::identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "c'est un pointeur de type A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "c'est un pointeur de type B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "c'est un pointer de type C" << std::endl;
    else
        std::cout << "ce pointeur ne correspont a aucune Base" << std::endl;
}

void     Base::identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "c'est une reference de type A" << std::endl;
    }
    catch (std::bad_cast&) {}

    try
    {
        B& b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "c'est une reference de type B" << std::endl;
    }
    catch (std::bad_cast&) {}

    try
    {
        C& c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "c'est une reference de type C" << std::endl;
    }
    catch (std::bad_cast&) {}
}