#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
protected:
    std::string name;
    std::string phoneNumber;

public:
    Person();
    Person(const std::string& name, const std::string& phoneNumber);

    virtual ~Person();

    std::string getName() const;
    void setName(const std::string& name);

    std::string getPhoneNumber() const;
    void setPhoneNumber(const std::string& phone);

    virtual void display() const;
};

#endif
