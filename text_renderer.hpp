#ifndef TEXT_RENDERER_HPP
#define TEXT_RENDERER_HPP
// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 07/04/2022


#include "renderer.hpp"
#include <iostream>
#include "renderer.hpp"


//ajout
class Rectangle;
class Circle;
class Line;
//Fin de l'ajout

class TextRenderer : public Renderer {

public:
    TextRenderer(std::ostream& os) : stream(&os) {};
    TextRenderer() : TextRenderer(std::cout) {};
    

    //Ajout

    void visiterRectangle(const Rectangle& rectangle); 
    void visiterLine(const Line& line)  ; 
    void visiterCircle(const Circle& circle) ; 
    //Fin de l' ajout

    void waitForExit();
    ~TextRenderer() {};


    std::ostream& getStream() {return *stream;} ;

protected:

    std::ostream* stream;

};

#endif // TEXT_RENDERER_HPP

