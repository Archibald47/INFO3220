#include "Bicycle.h"
using namespace week02;

Bicycle::Bicycle()
{

}

Bicycle::~Bicycle()
{

}

int Bicycle::getSafetyRating() {
    if (m_helmetUsed) {
        return 5;
    } else {
        return 0;
    }
}
