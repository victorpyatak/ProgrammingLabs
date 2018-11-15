#include "FlyingObject.h"


class PassengerPlane : public FlyingObject {
    public:
        PassengerPlane(std::string , std::string , int);
        void displayFlyingObjectInfo() override;
        ~PassengerPlane();

    private:
        int passengerPlaneSeats;
};