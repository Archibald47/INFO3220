#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
//using namespace week02;

namespace week02 {
    class Vehicle {
    public:
         Vehicle(){}

        Vehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            std::string color = "red"){
            m_numberOfPassengers = numberOfPassengers;
            m_topSpeed = topSpeed;
            m_numberOfWheels=numberOfWheels;
            m_color=color;
        }

        virtual ~Vehicle(){}

        virtual std::string getColor(){return m_color;}

        virtual int getTopSpeed(){return m_topSpeed;}

        virtual int getNumberOfWheels(){return m_numberOfWheels;}

        virtual int getNumberOfPassengers(){return m_numberOfPassengers;}

        virtual int getSafetyRating()=0; //pure virtual

    protected:
        int m_numberOfPassengers;
        int m_topSpeed;
        int m_numberOfWheels;
        std::string m_color;
    };
}

#endif // VEHICLE_H


