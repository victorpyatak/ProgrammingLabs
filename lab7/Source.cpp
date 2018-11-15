//#include <iostream>
#include "src/FlyingObject.cpp"
#include "src/PassengerPlane.cpp"
#include "src/SportPlane.cpp"
#include "src/Glider.cpp"
#include "src/Destroyer.cpp"
#include "src/Bombarder.cpp"

using namespace std;

main(int argc, char const *argv[])
{   
    PassengerPlane passengerObj("Passenger Plane" , "Boeing 782" , 450);
    SportPlane sportObj("Sport Plane" , "Lightning" , 765);
    Glider gliderObj("Glider" , "Red Cloud" , 525);
    Destroyer destroyerObj("Destroyer" , "Crasher" , 431.5);
    Bombarder bombarderObj("Bombarder" , "Bomby" , 50);

    passengerObj.displayFlyingObjectInfo();
    sportObj.displayFlyingObjectInfo();
    gliderObj.displayFlyingObjectInfo();
    destroyerObj.displayFlyingObjectInfo();
    bombarderObj.displayFlyingObjectInfo();
    
    return 0;
}
