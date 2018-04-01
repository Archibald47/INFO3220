#ifndef CAR_H
#define CAR_H
#include "MotorVehicle.h"

using namespace week02;

namespace week02 {
    class Car :public MotorVehicle {
    public:
        Car();
        ~Car();
        Car(int numberOfPassengers,
            int topSpeed,
            double kilometresPerLitre,
            int numberOfAirBags = 2,
            bool abs = true,
            int numberOfWheels = 4)
            :MotorVehicle( numberOfPassengers,
                           topSpeed,
                           numberOfWheels,
                           kilometresPerLitre),
            m_numberOfAirBags(numberOfAirBags),
            m_abs(abs)
        {}

        Car(int numberOfPassengers,
            int topSpeed,
            double kilometresPerLitre,
            std::string color,
            int numberOfAirBags = 2,
            bool abs = true,
            int numberOfWheels = 4)
            :MotorVehicle( numberOfPassengers,
                           topSpeed,
                           numberOfWheels,
                           color,
                           kilometresPerLitre),
              m_numberOfAirBags(numberOfAirBags),
              m_abs(abs)
        {

        }
        int getSafetyRating();


    private:
        int m_numberOfAirBags;
        bool m_abs;
    };
}


#endif // CAR_H
