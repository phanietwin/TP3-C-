// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 07/04/2022

#include "text_renderer.hpp"
#include"rectangle.hpp"
#include"line.hpp"
#include "circle.hpp"
#include <iostream>

 void TextRenderer::visiterRectangle(const Rectangle& rectangle){
     this->getStream() << "Rectangle de centre (" <<  rectangle.getX() << ", " <<  rectangle.getY() << "), de largeur " <<  rectangle.getWidth() << " et de hauteur " <<  rectangle.getHeight() << std::endl;

 }; 
void TextRenderer::visiterLine(const Line& line){
      this->getStream() << "Ligne du point (" << line.getX1() << ", " << line.getY1() << ") au point (" << line.getX2() << ", " << line.getY2() << ")" << std::endl;

}; 
void TextRenderer::visiterCircle(const Circle& circle){
    this->getStream() << "Cercle de centre (" << circle.getX() << ", " << circle.getY() << ") et de rayon " << circle.getRadius() << std::endl;

}; 

void TextRenderer::waitForExit()
{
    std::cout << "Appuyez sur Entrée pour continuer..." << std::endl;
    std::cin.get();
}
