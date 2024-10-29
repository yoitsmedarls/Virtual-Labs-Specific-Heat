#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#define INIT_WINDOW_WIDTH 1280
#define INIT_WINDOW_HEIGHT 720

int main()
{
    sf::Window window;
    window.create(sf::VideoMode(INIT_WINDOW_WIDTH, INIT_WINDOW_HEIGHT), "Virtual Labs: Specific Heat");
    window.setPosition(sf::Vector2i(
        (sf::VideoMode::getDesktopMode().width - window.getSize().x) / 2,
        (sf::VideoMode::getDesktopMode().height - window.getSize().y) / 2));

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;

            default:
                break;
            }
        }
    }

    return 0;
}