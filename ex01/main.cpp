/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radlouni <radlouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:29:47 by radlouni          #+#    #+#             */
/*   Updated: 2025/11/13 17:28:07 by radlouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    std::cout << " --- Création d’un objet Data ---\n" << std ::endl;
    Data data;
    data.name = "Alice";
    std::cout << "data.name = " << data.name << std::endl;
    data.age = 25;
    std::cout << "data.age = " << data.age << std::endl;

    std::cout << "\n --- Affichage de l’adresse d’origine ---\n" << std::endl;
    std::cout << "Adresse originale de data : " << &data << std::endl;

    std::cout << "\n --- Sérialisation : conversion du pointeur en entier ---\n" << std::endl;
    uintptr_t raw = Serializer::serialize(&data);
    std::cout << "Valeur sérialisée (entier) : " << raw << std::endl;

    std::cout << "\n --- Désérialisation : reconversion de l’entier en pointeur (verification) ---\n" << std::endl;
    Data* ptr = Serializer::deserialize(raw);
    std::cout << "Adresse désérialisée      : " << ptr << std::endl;

    std::cout << "\n --- Test du contenu ---\n" << std::endl;
    std::cout << "Nom dans l’objet pointé   : " << ptr->name << std::endl;
    std::cout << "Âge dans l’objet pointé   : " << ptr->age << std::endl;

    std::cout <<  "\n --- Vérification finale ---\n" << std::endl;
    if (ptr == &data)
        std::cout << "Succès : les pointeurs sont identiques !" << std::endl;
    else
        std::cout << "Erreur : les pointeurs diffèrent." << std::endl;

    return 0;
}
