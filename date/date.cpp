#include "date.h"

using namespace Week4;
using namespace std;


string Date::dateAsString() const{
    string r = to_string(m_day);
    r.append("/");
    r.append(to_string(m_month));
    r.append("/");
    r.append(to_string(m_year));
    return r;
}

int Date::getYear() const{
    return m_year;
}
int Date::getMonth() const{
    return m_month;
}
int Date::getDay() const{
    return m_day;
}
