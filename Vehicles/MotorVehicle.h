#ifndef MOTORVEHICLE
#define MOTORVEHICLE

#include "Vehicle.h"
using namespace week02;

namespace week02 {
    class MotorVehicle : public Vehicle {
    public:
        MotorVehicle(){}
        MotorVehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            double kilometresPerLitre)
            :Vehicle(numberOfPassengers,
                     topSpeed,
                     numberOfWheels),
            m_kmpl(kilometresPerLitre)
        {

        }

        MotorVehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            std::string color,
            double kilometresPerLitre)
            :Vehicle(numberOfPassengers,
                     topSpeed,
                     numberOfWheels, color),
              m_kmpl(kilometresPerLitre)
        {

        }

        virtual ~MotorVehicle(){}

        virtual double getKilometresPerLitre(){return m_kmpl;}

    protected:
        double m_kmpl;
    };
}

#endif // MOTORVEHICLE


