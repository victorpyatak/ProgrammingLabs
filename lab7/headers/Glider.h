#include "FlyingObject.h"

class Glider : public FlyingObject {
    public:
        Glider(std::string , std::string , int);
        void displayFlyingObjectInfo() override;
        ~Glider();

    private:
        int gliderWeight;
};