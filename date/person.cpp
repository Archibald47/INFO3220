#include "person.h"

using namespace Week4;





void Person:: changeFirstName(std::string firstName){
    m_firstName = firstName;
}
std::string Person:: getFirstName() const{
    return m_firstName;
}

void Person:: changeSurname(std::string surname){
    m_surname = surname;
}
std::string Person:: getSurname() const{
    return m_surname;
}

int Person:: getYearOfBirth() const{
    return m_dateOfBirth.getYear();
}
int Person:: getCurrentAge() const{
    return (2018 - getYearOfBirth());
}
