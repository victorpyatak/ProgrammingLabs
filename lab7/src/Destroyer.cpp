#include "../headers/Destroyer.h"

Destroyer::Destroyer(string type , string name , double damage):
    FlyingObject(type , name)
        {
          destroyerDamage = damage;
        }

void Destroyer::displayFlyingObjectInfo(){
    FlyingObject::displayFlyingObjectInfo();
    cout << "Damage : " << destroyerDamage << " dmg\n" << endl;
}


Destroyer::~Destroyer(){

}