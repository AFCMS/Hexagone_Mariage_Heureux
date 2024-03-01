//
// Created by afcm on 01/03/24.
//

#include <iostream>
#include <utility>
#include "Man.hpp"



std::optional<Person> Man::getPartner() {
    return partner;
}

bool Man::isSingle() {
    return !partner.has_value();
}

void Man::setPartner(Person newPartner) {
    partner = std::move(newPartner);
}

void Man::display() {
    Person::display();
    if (isSingle()) {
        std::cout << "Il est célibataire." << std::endl;
    } else {
        std::cout << "Il est marié à " << partner->getFirstName() << " " << partner->getLastName() << std::endl;
    }
}

Man::Man() : Person() {}

Man::Man(std::string firstName, std::string lastName, int age) : Person(std::move(firstName), std::move(lastName), age) {}
