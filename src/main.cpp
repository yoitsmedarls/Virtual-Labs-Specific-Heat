#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

// Dimensions for the initial window launch
#define INIT_WINDOW_WIDTH 1366
#define INIT_WINDOW_HEIGHT 768

// Allowance given to accommodate the desktop taskbar
#define TASKBAR_SIZE 48

int main()
{
    // Creates a centered window with an FPS limit
    sf::RenderWindow window(
        sf::VideoMode(INIT_WINDOW_WIDTH, INIT_WINDOW_HEIGHT),
        "Virtual Labs: Specific Heat");
    window.setPosition(sf::Vector2i(
        ((sf::VideoMode::getDesktopMode().width - window.getSize().x) / 2),
        ((sf::VideoMode::getDesktopMode().height - window.getSize().y) / 2) - TASKBAR_SIZE));
    window.setFramerateLimit(60);

    // Prints out valuable information to the console
    std::cout << std::endl
              << "WINDOW SETUP INFORMATION:\n"
              << "  Position: \n"
              << "    x: " << window.getPosition().x << "\n"
              << "    y: " << window.getPosition().y << "\n"
              << "  Window Size: " << "\n"
              << "    width: " << window.getSize().x << "px" << "\n"
              << "    height: " << window.getSize().y << "px" << "\n"
              << std::endl;

    // Indicates program startup
    std::cout << "Launching window..." << std::endl;

    // Starts the program loop
    while (window.isOpen())
    {
        // Event handler
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            // Closes the window upon pressing the close button
            case sf::Event::Closed:
                window.close();
                std::cout << "...Window closed" << std::endl;
                exit(EXIT_SUCCESS);
                break;

            default:
                break;
            }
        }

        window.clear();
        window.display();
    }

    return 0;
}