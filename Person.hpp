//
// Created by afcm on 01/03/24.
//

#ifndef HEXAGONE_MARIAGE_HEUREUX_PERSON_HPP
#define HEXAGONE_MARIAGE_HEUREUX_PERSON_HPP

#include <string>

class Person {
protected:
    std::string firstName;
    std::string lastName;
    int age;
public:
    Person();
    Person(std::string firstName, std::string lastName, int age);
    void getOld();
    std::string getFirstName();
    void setFirstName(std::string newFirstName);
    std::string getLastName();
    void setLastName(std::string lastName);
    int getAge();
    void setAge(int newA);

    virtual void display();

};


#endif //HEXAGONE_MARIAGE_HEUREUX_PERSON_HPP
