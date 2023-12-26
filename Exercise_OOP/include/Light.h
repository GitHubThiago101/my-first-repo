#ifndef LIGHT_H
#define LIGHT_H
#include "Controller.h"
#include "Battery.h"
#include <thread>
#include <unistd.h>
class Light : public LightControllerDelegate
{
    public:
        Light();
        virtual ~Light();
        void operator()();
        void didTurnLight(StateLight) override;

    protected:

    private:
        int currentenergy;
        Battery* battery;
};

#endif // LIGHT_H
