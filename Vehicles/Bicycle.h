#ifndef BICYCLE_H
#define BICYCLE_H
#include "Vehicle.h"
using namespace week02;

namespace week02{
    class Bicycle : public Vehicle
    {
    public:
        Bicycle();
        ~Bicycle();
        Bicycle(int numberOfPassengers,
            int topSpeed,
            bool helmetUsed = false,
            int numberOfWheels = 2){
            m_numberOfPassengers=numberOfPassengers;
            m_topSpeed=topSpeed;
            m_helmetUsed=helmetUsed;
            m_numberOfWheels=numberOfWheels;
        }

        Bicycle(int numberOfPassengers,
            int topSpeed,
            std::string color,
            bool helmetUsed = false,
            int numberOfWheels = 2){
            m_numberOfPassengers=numberOfPassengers;
            m_topSpeed=topSpeed;
            m_color=color;
            m_helmetUsed=helmetUsed;
            m_numberOfWheels=numberOfWheels;
        }
        int getSafetyRating();

    protected:
        bool m_helmetUsed;

    };
}
#endif // BICYCLE_H
