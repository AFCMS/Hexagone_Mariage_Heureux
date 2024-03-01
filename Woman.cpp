//
// Created by afcm on 01/03/24.
//

#include "Woman.hpp"

#include <iostream>
#include <utility>

std::optional<Person> Woman::getPartner() {
    return partner;
}

bool Woman::isSingle() {
    return !partner.has_value();
}

void Woman::setPartner(Person newPartner) {
    partner = std::move(newPartner);
}

void Woman::display() {
    Person::display();
    if (isSingle()) {
        std::cout << "Elle est célibataire." << std::endl;
    } else {
        std::cout << "Elle est mariée à " << partner->getFirstName() << " " << partner->getLastName() << std::endl;
    }
}

Woman::Woman(std::string firstName, std::string lastName, int age) : Person(std::move(firstName), std::move(lastName), age) {

}
