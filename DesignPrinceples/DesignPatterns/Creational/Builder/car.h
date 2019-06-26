#ifndef CAR_H
#define CAR_H
#include <iostream>
using namespace std;
class IResults{
public:
    virtual ~IResults(){}
    virtual string print() = 0;
};

class Car:public IResults
{
public:
    Car(int _wheels = 4,string _color = "black",int _seats=5);

    int getWheels() const;
    void setWheels(int value);

    string getColor() const;
    void setColor(const string &value);

    int getSeats() const;
    void setSeats(int value);

    ~Car(){}
    string print() override;
private:
    int wheels;
    string color ;
    int seats ;
};

#endif // CAR_H
