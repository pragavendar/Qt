#include "car.h"
#include <sstream>
Car::Car(int _wheels, string _color, int _seats):
    wheels(_wheels),
    color(_color),
    seats(_seats)
{

}

int Car::getWheels() const
{
    return wheels;
}

void Car::setWheels(int value)
{
    wheels = value;
}

string Car::getColor() const
{
    return color;
}

void Car::setColor(const string &value)
{
    color = value;
}

int Car::getSeats() const
{
    return seats;
}

void Car::setSeats(int value)
{
    seats = value;
}

string Car::print()
{
    stringstream ss;
    ss<<"Car Color " << color <<" No of Seats " << seats << " No of Wheels " <<wheels ;
    return  ss.str();
}
