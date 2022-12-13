#include "03-DrawExample.h"

#include <SFML/Graphics.hpp>

void drawExample()
{
    auto window = sf::RenderWindow(sf::VideoMode(400, 400), "Draw() example");

    auto circle = sf::CircleShape(200);
    circle.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        window.clear();
        window.draw(circle);
        window.display();

        if (auto event = sf::Event{}; window.waitEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            }
        }
    }
}
