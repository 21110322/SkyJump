#include <SFML/Graphics.hpp>
#include <vector>

class Personaje
{
public:
    sf::Texture texture;
    sf::Sprite sprite;

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

    void setPosition(float x, float y)
    {
        sprite.setPosition(x, y);
    }

    sf::Vector2f getPosition()
    {
        return sprite.getPosition();
    }

    float getHeight()
    {
        return sprite.getGlobalBounds().height;
    }
};

double velocidad = 190;

int main()
{
    sf::RenderWindow window(sf::VideoMode(736, 600), "DinoChrome");

    Personaje conejo(sf::Vector2f(20, 300), "./assets/images/conejo.png");
    Personaje fondo1(sf::Vector2f(0, 0), "./assets/images/cielo.jpg");
    Personaje fondo2(sf::Vector2f(0, fondo1.getHeight()), "./assets/images/cielo.jpg");
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

        // Desplazar el fondo verticalmente
        fondo1.move(0, -0.1);
        fondo2.move(0, -0.1);

        // Si un fondo se sale de la pantalla, restablecer su posición
        if (fondo1.getPosition().y <= -fondo1.getHeight())
        {
            fondo1.setPosition(0, fondo2.getPosition().y + fondo2.getHeight());
        }
        if (fondo2.getPosition().y <= -fondo2.getHeight())
        {
            fondo2.setPosition(0, fondo1.getPosition().y + fondo1.getHeight());
        }

        window.clear();
        fondo1.draw(window);
        fondo2.draw(window);
        conejo.draw(window);
        bloque.draw(window);
        window.display();
    }

    return 0;
}
