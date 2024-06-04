#pragma once
#include <fstream>
#include <Player.hpp>
#include <Platform.hpp>
#include <vector>
using namespace std;
using namespace ftxui;



class Player {
private:
    double positionX, positionY; // Posición del jugador
    double velocityX, velocityY; // Velocidad del jugador
    bool isJumping; // Estado de salto del jugador

public:
    // Constructor
    Player(double posX, double posY, double velX, double velY)
        : positionX(posX), positionY(posY), velocityX(velX), velocityY(velY), isJumping(false) {}

    // Getters
    double getPositionX() const { return positionX; }
    double getPositionY() const { return positionY; }
    double getVelocityX() const { return velocityX; }
    double getVelocityY() const { return velocityY; }
    bool getIsJumping() const { return isJumping; }

    // Setters
    void setPositionX(double posX) { positionX = posX; }
    void setPositionY(double posY) { positionY = posY; }
    void setVelocityX(double velX) { velocityX = velX; }
    void setVelocityY(double velY) { velocityY = velY; }
    void setIsJumping(bool jumping) { isJumping = jumping; }

    // Otros métodos para manejar el comportamiento del jugador
};


//Esta clase podría representar al jugador en el juego. 
//Podría tener atributos como la posición, la velocidad y el estado del jugador (por ejemplo, si está saltando o cayendo).