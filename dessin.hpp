#ifndef DESSIN_HPP
#define DESSIN_HPP
// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 08/04/2022



#include <vector>
#include "sfml_renderer.hpp"
#include "text_renderer.hpp"

#include "dessin.hpp"
#include "circle.hpp"
#include "line.hpp"
#include "rectangle.hpp"
#include"renderer.hpp"
#include "forme.hpp"

#include <iostream>

class Dessin {
public:
    void addForme(forme_ptr forme) { formes.push_back(forme); }; // Add form by pointer

    //ajout
    void display(SFMLRenderer& renderer) ;
    void display(TextRenderer& renderer);
    //fin de l'ajout
    
    forme_ptr getForme(size_t i) {return formes[i];}; // will throw std::out_of_range on wrong index
    
    size_t nFormes() const {return formes.size();}

protected:
    std::vector<forme_ptr> formes;
};

#endif // DESSIN_HPP

