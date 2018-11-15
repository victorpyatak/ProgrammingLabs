#include "../headers/Bombarder.h"

Bombarder::Bombarder(string type, string name , int capacity):
    FlyingObject(type , name)
{
    bombCapacity = capacity;
}

void Bombarder::displayFlyingObjectInfo(){
    FlyingObject::displayFlyingObjectInfo();
    cout << "Bomb capacity :" << bombCapacity << " pcs\n" << endl;
}

Bombarder::~Bombarder(){

}