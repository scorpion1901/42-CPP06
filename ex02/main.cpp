/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 17:29:53 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 18:45:15 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int    main()
{
    Base*    obj;

    std::cout
        << "TEST 1: generate() + identify(&) + identify(*)"
        << std::endl;
    obj = Base::generate();
    Base::identify(obj);
    Base::identify(*obj);
    delete obj;

    std::cout
         << std::endl
        << "TEST 2: new Base() + identify(&) + identify(*)"
        << std::endl;
    obj = new Base();
    Base::identify(obj);
    Base::identify(*obj);
    delete obj;
}