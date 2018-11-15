#include "FlyingObject.h"

class Bombarder : public FlyingObject {
    public:
        Bombarder(std::string , std::string , int);
        void displayFlyingObjectInfo() override;
        ~Bombarder();

    private:
        int bombCapacity;
};