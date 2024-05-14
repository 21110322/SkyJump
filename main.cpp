#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include "SkyJump.hpp"

using namespace std;
using namespace ftxui;

int main() {
    SkyJump skyJump;
    skyJump.start();
    skyJump.end();

    return 0;
}