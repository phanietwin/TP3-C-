#ifndef SFML_RENDERER_HPP
#define SFML_RENDERER_HPP
// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 07/04/2022

#include <SFML/Graphics.hpp>

#include "renderer.hpp"
//ajout
class Rectangle;
class Circle;
class Line;
//Fin de l'ajout

class SFMLRenderer : public Renderer {

public:
    SFMLRenderer();
    ~SFMLRenderer();

     //Ajout
     void visiterRectangle(const Rectangle& rectangle); 
    void visiterLine(const Line& line) ; 
    void visiterCircle(const Circle& circle) ; 
    //Fin de l' ajout

    void waitForExit();
    
    sf::RenderWindow& getWindow() {return *window;};

private:
     sf::RenderWindow* window;
};

#endif // SFML_RENDERER_HPP

