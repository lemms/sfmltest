#include <iostream>
#include <ft2build.h>
#include FT_FREETYPE_H
#include <SFML/Graphics.hpp>

int main(int argc, char**argv)
{
    std::cout << "Testing sfml\n";
    std::cout << "Loading FreeType\n";
    FT_Library library;
    auto error = FT_Init_FreeType(&library);
    if (error)
    {
        std::cerr << "Failed to load Freetype library.\n";
        return -1;
    }
    sf::RenderWindow window(sf::VideoMode(470, 242, sf::Style::Fullscreen), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}
