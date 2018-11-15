#include "FlyingObject.h"


class SportPlane : public FlyingObject {
    public:
        SportPlane(std::string , std::string , int);
        void displayFlyingObjectInfo() override;
        ~SportPlane();

    private:
        int sportPlaneSpeed;
};