// Esta clase podría representar las plataformas en las que el jugador salta. 
// Podría tener atributos como la posición y el tipo de plataforma (por ejemplo, normal, móvil, desapareciendo, etc.).

#ifndef PLATFORM_HPP
#define PLATFORM_HPP

class Platform {
private:
    double positionX, positionY; // Posición de la plataforma
    double width, height; // Dimensiones de la plataforma
    bool isMoving; // Estado de movimiento de la plataforma

public:
    // Constructor
    Platform(double posX, double posY, double w, double h)
        : positionX(posX), positionY(posY), width(w), height(h), isMoving(false) {}

    // Getters
    double getPositionX() const { return positionX; }
    double getPositionY() const { return positionY; }
    double getWidth() const { return width; }
    double getHeight() const { return height; }
    bool getIsMoving() const { return isMoving; }

    // Setters
    void setPositionX(double posX) { positionX = posX; }
    void setPositionY(double posY) { positionY = posY; }
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }
    void setIsMoving(bool moving) { isMoving = moving; }

    // Otros métodos para manejar el comportamiento de la plataforma
};

#endif 