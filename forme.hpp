#ifndef FORME_HPP
#define FORME_HPP
// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 08/04/2022

#include "sfml_renderer.hpp"
#include "text_renderer.hpp"
#include "renderer.hpp"
#include <iostream> 
#include <memory>

class Forme {



public:
    
    virtual ~Forme() {};

    //ajout
   virtual void display(SFMLRenderer &renderer) const =0;
   virtual void display(TextRenderer &renderer) const =0;
    //fin de l'ajout

};

//Question deux 
typedef std::shared_ptr<Forme> forme_ptr;

#endif // FORME_HPP

