#include "Bus.h"
using namespace week02;
Bus::Bus()
{

}

Bus::~Bus()
{

}

int Bus::getSafetyRating() {
    int safetyRating = 0;

    if (m_seatBeltsInstalled) {
        safetyRating += 3;
    }
    if (!m_standingPassengersAllowed) {
        safetyRating += 2;
    }
    return safetyRating;
}
