#include "../headers/FlyingObject.h"

FlyingObject::FlyingObject(string type, string name){
    flyingObjectName = name;
    flyingObjectType = type;
}

void FlyingObject::displayFlyingObjectInfo(){
    cout << "Type : " << flyingObjectType << endl;
    cout << "Name : " << flyingObjectName << endl;
}

FlyingObject::~FlyingObject(){

}