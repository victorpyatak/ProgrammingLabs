#include "FlyingObject.h"

class Destroyer : public FlyingObject {
    public:
        Destroyer(std::string , std::string , double);
        void displayFlyingObjectInfo() override;
        ~Destroyer();

    private:
        double destroyerDamage;
};