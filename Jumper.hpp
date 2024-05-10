#ifndef JUMPER_HPP
#define JUMPER_HPP

#include <string>

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