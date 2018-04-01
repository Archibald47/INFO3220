#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"

namespace Week4
{
class Student : public Person
{
public:

    Student(const std::string &givenName, const std::string &surname,
            const Date &date, const std::string &degree)
        :Person(givenName,surname,date)
        ,m_degree(&degree){
        m_recordAccessed = 0;};
    virtual ~Student(){};

    virtual std::string getRecord() const;

private:
    const std::string* m_degree;
    mutable int m_recordAccessed;
};
} // namespace Week4

#endif
