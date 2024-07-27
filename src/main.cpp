#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    // 1920x1080 is size of window
    // second parameter is title
    // third parameter is style
    sf::Window window(sf::VideoMode(450, 450), "Call of Duty", sf::Style::Default);
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }
 
    return EXIT_SUCCESS;
}
