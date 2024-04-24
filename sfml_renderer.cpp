// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 07/04/2022

#include "sfml_renderer.hpp"
#include <iostream>
#include "circle.hpp"
#include"line.hpp"
#include"rectangle.hpp"

SFMLRenderer::SFMLRenderer()
{
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Fenêtre SFML");
    window->clear(sf::Color::Black);
}

SFMLRenderer::~SFMLRenderer()
{
    delete window;
}


void SFMLRenderer::waitForExit()
{
    window->display();
    
    std::cout << "Fermez la fenêtre pour continuer." <<  std::endl;
    
    while (window->isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window->pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window->close();
        }
    }
}

//ajout
void SFMLRenderer::visiterRectangle(const Rectangle& rectangle){
     sf::RectangleShape rectangle2(sf::Vector2f(rectangle.getWidth(), rectangle.getHeight()));
    rectangle2.setPosition(rectangle.getX() - rectangle.getWidth()/2, rectangle.getY() - rectangle.getHeight()/2); // We must convert the center position to the top left point position
    
    this->getWindow().draw(rectangle2);
    

 }; 

void SFMLRenderer::visiterLine(const Line& line){
    sf::Vertex line2[] =
    {
        sf::Vertex(sf::Vector2f(line.getX1(), line.getY1())),
        sf::Vertex(sf::Vector2f(line.getX2(), line.getY2()))
    };

    this->getWindow().draw(line2, 2, sf::Lines);
    
}; 

void SFMLRenderer::visiterCircle(const Circle& circle){
       sf::CircleShape circle2(circle.getRadius()); // Create circle
    circle2.setPosition(circle.getX() - circle.getRadius(), circle.getY() - circle.getRadius()); //  We must convert the center position to the top left point position
    
    this->getWindow().draw(circle2);

}; 
//fin de l'ajout
