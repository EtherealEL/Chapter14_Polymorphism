#include <iostream>
using namespace std;





class Vehicle
{
public:
    void showType()
    {
        cout << "The vehicle is used for transportation." << endl;
    }
};

class Car : public Vehicle
{
public:
    void showType()
    {
        cout << "Car is a four-wheeler vehicle." << endl;
    }
};

class Bike : public Vehicle
{
public:
    void showType()
    {
        cout << "The bike is a two wheeled vehicle." << endl;
    }
};





int main()
{
    Car car_object;
    Bike bike_object;
    Vehicle* vehicle_pointer;

    car_object.showType();
    bike_object.showType();

    vehicle_pointer = &car_object;
    vehicle_pointer->showType();

    return 0;
}
