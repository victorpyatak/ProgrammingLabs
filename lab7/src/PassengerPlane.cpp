#include "../headers/PassengerPlane.h"


PassengerPlane::PassengerPlane(string type , string name , int seats):
    FlyingObject(type , name)
{
    passengerPlaneSeats = seats;
}

void PassengerPlane::displayFlyingObjectInfo(){
    FlyingObject::displayFlyingObjectInfo();
    cout << "Seats : " << passengerPlaneSeats << "\n" << endl;
}

PassengerPlane::~PassengerPlane(){

}