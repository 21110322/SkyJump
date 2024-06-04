#include <iostream>
#include <string>
#include <thread>
#include <fstream>
#include "include/Player.hpp"
#include "include/Platform.hpp"
#include "include/Game.hpp"

using namespace std;
using namespace ftxui;


int main() {
    // Crear instancias de las clases
    Player player(0.0f, 0.0f, 0.0f); // Jugador inicializado en la posición (0,0) con velocidad 0
    Platform platform; // Plataforma inicializada

    // Crear una instancia del juego con el jugador y la plataforma
    Game game(player, platform);

    // Iniciar el juego
    game.start();

    // Lógica del juego...
    
    // Bucle principal del juego
    while (game.isRunning()) {
        // Manejo de eventos (este es un ejemplo muy simplificado)
        char event;
        std::cin >> event;
        switch (event) {
            case 'w': // El jugador salta
                player.jump();
                break;
            case 'a': // El jugador se mueve a la izquierda
                player.moveLeft();
                break;
            case 'd': // El jugador se mueve a la derecha
                player.moveRight();
                break;
            default:
                break;
        }

        // Actualización de la posición del jugador
        // Aquí puedes agregar el código para actualizar la posición del jugador en función de su velocidad y otros factores
        // Por ejemplo, podrías tener algo como esto:
        player.setPositionY(player.getPositionY() + player.getVelocity());

        // Renderizado y otras actualizaciones...
    }

    return 0;
}