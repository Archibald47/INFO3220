#include "student.h"
using namespace Week4;



std::string Student::getRecord() const{
    m_recordAccessed += 1;
    std::string r;
    r.append("Name: ");
    r.append(m_firstName);
    r.append(" ");
    r.append(m_surname);
    r.append("\n");
    r.append("Date Of Birth: ");
    r.append(m_dateOfBirth.dateAsString());
    r.append("\n");
    r.append("Degree: ");
    r.append(*m_degree);
    r.append("\n");
    r.append("RecordAccessed: ");
    //r.append(m_recordAccessed);

    return r;
//    Name: Firstname Surname
//    Date Of Birth: Date object as string
//    Degree: Degree Pointer dereferenced as string
}
