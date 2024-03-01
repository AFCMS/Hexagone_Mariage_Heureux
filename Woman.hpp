//
// Created by afcm on 01/03/24.
//

#ifndef HEXAGONE_MARIAGE_HEUREUX_WOMAN_HPP
#define HEXAGONE_MARIAGE_HEUREUX_WOMAN_HPP


#include <optional>
#include "Person.hpp"

class Woman : public Person {
protected:
    std::optional<Person> partner;
public:
    Woman(std::string firstName, std::string lastName, int age);
    bool isSingle();
    std::optional<Person> getPartner();
    void setPartner(Person newPartner);
    void display() override;
};


#endif //HEXAGONE_MARIAGE_HEUREUX_WOMAN_HPP
