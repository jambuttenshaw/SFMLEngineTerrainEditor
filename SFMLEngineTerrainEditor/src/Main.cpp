#include <SFML/Graphics.hpp>

#include "PaletteDisplay.h"
#include "WorldDisplay.h"


int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(1200, 675), "Terrain Editor");

    PaletteDisplay paletteDisplay(&window);
    WorldDisplay worldDisplay(&window);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        paletteDisplay.Update();
        worldDisplay.Update();


        // Clear screen
        window.clear();

        paletteDisplay.Render();
        worldDisplay.Render();

        // Update the window
        window.display();
    }
    return EXIT_SUCCESS;
}