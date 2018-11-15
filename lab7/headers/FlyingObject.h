#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H


#include <iostream>
#include <string>
using namespace std;

class FlyingObject {
    public:
        FlyingObject(std::string , std::string);
        virtual void displayFlyingObjectInfo();
        ~FlyingObject();

    protected:
        std::string flyingObjectType;
        std::string flyingObjectName;
        
    
};

#endif