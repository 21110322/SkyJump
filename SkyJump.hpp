#ifndef SKYJUMP_HPP
#define SKYJUMP_HPP
#include "Jumper.hpp"
#include "Parachute.hpp"
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include "SkyJump.hpp"

using namespace std;
using namespace ftxui;

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

#endl
