#ifndef ICARBUILDER_H
#define ICARBUILDER_H
#include <memory>
#include "car.h"
class IBulder{
public:
    virtual IBulder & setSeats(int _seats) = 0;
    virtual IBulder & setWheels(int _wheels) = 0;
    virtual IBulder & setColor(string _color) = 0;
    virtual unique_ptr<IResults> getRestulrs() = 0;
};

class  CarBuilder : public IBulder{
public:
    IBulder &setSeats(int _seats){m_car->setSeats(_seats); return (*this);}
    IBulder & setWheels(int _wheels){ m_car->setWheels(_wheels);return *(this);}
    IBulder &setColor(string _color){m_car->setColor(_color);return *(this);}
    unique_ptr<IResults> getRestulrs() {return std::move(m_car);}
    ~CarBuilder(){}
private:
    unique_ptr<Car> m_car = make_unique<Car>();
};

class CarBuilderDirector{
public:
    void cunstructCar(){
        unique_ptr<IBulder> carBuilder =  make_unique<CarBuilder>();
//        carBuilder->setColor("white");
//        carBuilder->setSeats(7);
//        carBuilder->setWheels(4);
//        cout << carBuilder->getRestulrs()->print();
        carBuilder->setColor("white").setSeats(7).setWheels(4).getRestulrs()->print();
    }
};

#endif // ICARBUILDER_H
