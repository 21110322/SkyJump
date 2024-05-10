#ifndef SKYJUMP_HPP
#define SKYJUMP_HPP

#include "Jumper.hpp"
#include "Parachute.hpp"

class SkyJump {
private:
    int altitude;
    Jumper* jumper;
    Parachute* parachute;
public:
    SkyJump();
    void start();
    void end();
};

#endif // SKYJUMP_HPP
