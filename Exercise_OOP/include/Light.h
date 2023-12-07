#ifndef LIGHT_H
#define LIGHT_H
#include "Controller.h"
#include "Battery.h"

class Light : public LightControllerDelegate
{
    public:
        Light();
        virtual ~Light();
        Light(const Light& other);
        Light& operator=(const Light& other);

        void didTurnLight(StateLight) override;

    protected:

    private:
        int currentenergy;
        Battery* battery;
};

#endif // LIGHT_H
