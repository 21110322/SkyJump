#ifndef PARACHUTE_HPP
#define PARACHUTE_HPP
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include "SkyJump.hpp"

using namespace std;
using namespace ftxui;

class Parachute {
private:
    std::string color;
    std::string size;
public:
    Parachute();
    void setColor(std::string color);
    void setSize(std::string size);
};

#endif // PARACHUTE_HPP