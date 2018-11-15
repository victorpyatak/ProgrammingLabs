#include "../headers/SportPlane.h"


SportPlane::SportPlane(string type , string name , int speed):
    FlyingObject(type , name)
{
    sportPlaneSpeed = speed;
}

void SportPlane::displayFlyingObjectInfo(){
    FlyingObject::displayFlyingObjectInfo();
    cout << "Speed : " << sportPlaneSpeed << " kmph\n" << endl;
}

SportPlane::~SportPlane(){

}