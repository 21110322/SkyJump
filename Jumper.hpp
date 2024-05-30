#ifndef JUMPER_HPP
#define JUMPER_HPP
#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include "SkyJump.hpp"
using namespace std;
using namespace ftxui;

class Jumper {
private:
    std::string name;
    int age;
public:
    Jumper();
    void setName(std::string name);
    void setAge(int age);
};

#endif // JUMPER_HPP