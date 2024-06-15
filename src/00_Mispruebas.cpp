#include <SFML/Audio.hpp>
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

    sf::Texture texture;
    sf::Sprite sprite;
};

double velocidad = 190;

int main()
{
    sf::RenderWindow window(sf::VideoMode(736, 800), "Doodle Jump");

    Personaje conejo(sf::Vector2f(20, 500), "./assets/images/conejo.png");
    Personaje fondo(sf::Vector2f(0, 0), "./assets/images/cielo.jpg");
    Personaje zanahoria(sf::Vector2f(20, 30), "./assets/images/zanahoria.png");
    zanahoria.sprite.setScale(0.5f, 0.5f); 
    Personaje fresa(sf::Vector2f(489, 355), "./assets/images/fresa.png");
    fresa.sprite.setScale(0.5f, 0.5f); 




    fondo.texture.setRepeated(true);

    sf::Music music;
    if (!music.openFromFile("./assets/music/musica.ogg"))
    {
        return -1;
    }

    music.play();

    float fondoY = 0;

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

        window.clear();

        for (int i=0;i<10;++i)
        {
            sf::Sprite spriteFondo = fondo.sprite;
            spriteFondo.setPosition(0, i * fondo.texture.getSize().y + fondoY);
            window.draw(spriteFondo);
        }

        window.clear();
        fondo.draw(window);
        conejo.draw(window);
        zanahoria.draw(window);
        fresa.draw(window);
        window.display();

        fondoY =-0.1;
        if (fondoY<=-fondo.texture.getSize().y)
        {
            fondoY = 0;
        }

        if (music.getStatus() != sf::Music::Playing)
        {
            window.close();
        }
    }

    return 0;
}
