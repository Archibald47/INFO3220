#ifndef COORDINATE_H
#define COORDINATE_H

#include <stdlib.h>
//using namespace Ui;

class Coordinate
{
public:
    Coordinate();
    Coordinate(unsigned
        int xCoordinate,
        unsigned int yCoordinate,
        unsigned int frameHeight)
        :m_xCoordinate(xCoordinate),
         m_yCoordinate(yCoordinate),
         m_frameHeight(frameHeight){
    }

    ~Coordinate();

    int getQtRenderingXCoordinate();
    int getQtRenderingYCoordinate();

    void changeInXCoordinate(int change);
    void changeInYCoordinate(int change);

    void setYCoordinateToZero(int offset);

    unsigned int getFrameHeight();

private:
    unsigned int m_xCoordinate;
    unsigned int m_yCoordinate;
    unsigned int m_frameHeight;
};

#endif // COORDINATE_H
