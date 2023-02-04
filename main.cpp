#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(800,800),"SFML Tutorial", sf::Style::Titlebar | sf:: Style::Close);
    sf::RectangleShape white(sf::Vector2f(5.0f,5.0f));
    window.clear();
    while (window.isOpen()){
        sf::Event evnt;
        while(window.pollEvent(evnt)){
            switch (evnt.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            case sf::Event::KeyPressed:
                if(evnt.key.code == sf::Keyboard::Escape){
                    window.close();
                    break;
                }
                }
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                    window.draw(white);
                    window.display();

                }
                sf::Vector2i mousepos = sf::Mouse::getPosition(window);
                white.setPosition(static_cast<float>(mousepos.x),static_cast<float>(mousepos.y));

                // if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
                //     white.move(5.0f,0.0f);

                // }
                // if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
                //     white.move(-5.0f,0.0f);

                // }
                // if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
                //     white.move(0.0f,-5.0f);

                // }
                // if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
                //     white.move(0.0f,5.0f);

                // }
                               
            }
        }
    }
