#include <SFML/Graphics.hpp>

class Personaje
{
public:
    Personaje(sf::Vector2f position, const std::string& imagePath)
    {
        if (!texture.loadFromFile(imagePath))
        {

        }
        sprite.setTexture(texture);
        sprite.setPosition(position);
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
    sf::RenderWindow window(sf::VideoMode(800, 600), "DinoChrome");

    
    Personaje character(sf::Vector2f(400, 300), "./assents/images/conejo.png");

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
                    character.move(velocidad * -1, 0);
                }
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
                {
                    character.move(velocidad, 0);
                }
            }
        }

        window.clear();
        character.draw(window);
        window.display();
    }

    return 0;
}