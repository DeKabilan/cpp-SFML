#include <SFML/Graphics.hpp>

int main(){
    sf::RenderWindow window(sf::VideoMode(512,512),"SFML Tutorial", sf::Style::Titlebar | sf:: Style::Close);
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
            }
        }
    }
