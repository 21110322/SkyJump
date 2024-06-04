// Esta clase podría representar el estado general del juego. Podría tener atributos como el jugador, una lista de plataformas y el puntaje actual. 
//También podría tener métodos para actualizar el juego, dibujar el juego y manejar la entrada del usuario.

#pragma once
#include <fstream>
#include <Player.hpp>
#include <Platform.hpp>
#include <vector>
using namespace std;
using namespace ftxui;

class Game {
private:
    Player player; // El jugador
    std::vector<Platform> platforms; // Las plataformas
    int score; // El puntaje

public:
    // Constructor
    Game() : player(0, 0, 0, 0), score(0) {}

    // Getters
    Player getPlayer() const { return player; }
    std::vector<Platform> getPlatforms() const { return platforms; }
    int getScore() const { return score; }

    // Setters
    void setPlayer(const Player& p) { player = p; }
    void setPlatforms(const std::vector<Platform>& p) { platforms = p; }
    void setScore(int s) { score = s; }

    // Método para actualizar el estado del juego
    void update() {
        // Actualizar el jugador y las plataformas
    }

    // Método para dibujar el juego
    void draw() {
        // Dibujar el jugador y las plataformas
    }

    // Método para manejar la entrada del usuario
    void handleInput() {
        // Manejar la entrada del usuario
    }
};

#endif