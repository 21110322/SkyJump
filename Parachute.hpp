#ifndef PARACHUTE_HPP
#define PARACHUTE_HPP

#include <string>

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