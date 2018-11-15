#include "../headers/Glider.h"

Glider::Glider(string type , string name , int weight):
    FlyingObject(type , name)
    {
    gliderWeight = weight;
}

void Glider::displayFlyingObjectInfo(){
    FlyingObject::displayFlyingObjectInfo();
    cout << "Weight : " << gliderWeight << " kg\n" << endl;
}

Glider::~Glider(){

}