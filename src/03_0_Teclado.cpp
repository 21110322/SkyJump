#include <SFML/Graphics.hpp>
#include <vector>

class Personaje
{
public:
    Personaje(sf::Vector2f position, const std::string &imagePath)
    {
        if (texture.loadFromFile(imagePath))
        {
            sprite.setTexture(texture);
            sprite.setPosition(position);
        }
    }

    void move(float offsetX, float offsetY)
    {
        sprite.move(offsetX, offsetY);
    }

    void draw(sf::RenderWindow &window)
    {
        window.draw(sprite);
    }

private:
    sf::Texture texture;
    sf::Sprite sprite;
};

double velocidad = 190;

int main()
{
    sf::RenderWindow window(sf::VideoMode(736, 600), "DinoChrome");

    Personaje conejo(sf::Vector2f(20, 300), "./assets/images/conejo.png");
    Personaje fondo(sf::Vector2f(0, 0), "./assets/images/cielo.jpg");
    Personaje bloque(sf::Vector2f(20, 30), "./assets/images/bloque.png");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if (event.type == sf::Event::KeyPressed)
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
                {
                    conejo.move(velocidad * -1, 0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    conejo.move(velocidad, 0);
                }
            }
        }
//Inicio del movimiento del fondo


    fondo.move(0, -0.1);


        window.clear();
        fondo.draw(window);
        conejo.draw(window);
        bloque.draw(window);
        window.display();
    }

    return 0;
}