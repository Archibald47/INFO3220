#ifndef BUS_H
#define BUS_H
#include "MotorVehicle.h"
using namespace week02;

namespace week02{
    class Bus : public MotorVehicle
    {
    public:
        Bus();
        ~Bus();
        Bus(int numberOfPassengers,
           int topSpeed,
           double kilometresPerLitre,
           bool seatBeltsInstalled = false,
           bool standingPassengersAllowed = true,
           int numberOfWheels = 6){
            m_numberOfPassengers = numberOfPassengers;
            m_topSpeed = topSpeed;
            m_kmpl = kilometresPerLitre;
            m_seatBeltsInstalled=seatBeltsInstalled;
            m_standingPassengersAllowed=standingPassengersAllowed;
            m_numberOfWheels = numberOfWheels;
        }

        Bus(int numberOfPassengers,
           int topSpeed,
           double kilometresPerLitre,
           std::string color,
           bool seatBeltsInstalled = false,
           bool standingPassengersAllowed = true,
           int numberOfWheels = 6){
            m_numberOfPassengers = numberOfPassengers;
            m_topSpeed = topSpeed;
            m_kmpl = kilometresPerLitre;
            m_seatBeltsInstalled=seatBeltsInstalled;
            m_standingPassengersAllowed=standingPassengersAllowed;
            m_numberOfWheels = numberOfWheels;
        }

        int getSafetyRating();

    protected:
           bool m_seatBeltsInstalled;
           bool m_standingPassengersAllowed;
    };
}

#endif // BUS_H
