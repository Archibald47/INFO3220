#ifndef PERSON_H
#define PERSON_H

#include "date.h"
#include <string>

namespace Week4
{
class Person
{
public:

    Person(const std::string &firstName,
        const std::string &surname,
           const Date &dateOfBirth):m_firstName(firstName),m_surname(surname),m_dateOfBirth(dateOfBirth){};
    virtual ~Person(){};

    void changeFirstName(std::string firstName);
    std::string getFirstName() const;

    void changeSurname(std::string surname);
    std::string getSurname() const;

    int getYearOfBirth() const;
    int getCurrentAge() const;

    virtual std::string getRecord() const = 0;

protected:
    std::string m_firstName;
    std::string m_surname;
    const Date m_dateOfBirth;
};
} // namespace  Week4
#endif
