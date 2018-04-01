#ifndef BALL_H
#define BALL_H

#include "coordinate.h"
#include <QPainter>
//using namespace Ui;

class Ball
{

public:
    Ball(Coordinate coordinate)
        :m_coordinate(coordinate){
    }
    Ball(Coordinate coordinate,
        unsigned int radius)
        :m_coordinate(coordinate),
         m_radius(radius){
    }
    Ball(Coordinate coordinate,
        unsigned int radius,
        double gravity,
        double xVelocity,
        double yVelocity)
        :m_coordinate(coordinate),
         m_radius(radius),
         m_gravity(gravity),
         m_xVelocity(xVelocity),
         m_yVelocity(yVelocity){
    }

    ~Ball();

    void render(QPainter &painter, unsigned int time);
    bool isCollision();
    unsigned int getRadius();

private:
    Ball();

    Coordinate m_coordinate;
    unsigned int m_radius;
    double m_gravity;
    double m_xVelocity;
    double m_yVelocity;
};

#endif // BALL_H
