// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 08/04/2022

#include "dessin.hpp"


void Dessin::display(SFMLRenderer& sfmlrenderer)
{
    for(const forme_ptr f : formes) // Display all shapes on SFML window
        f->display(sfmlrenderer);
    // Close window to continue
    sfmlrenderer.waitForExit();
}

void Dessin::display(TextRenderer& textrenderer)
{
    for(const forme_ptr f : formes)
        f->display(textrenderer);  // Display all shapes on text stream
    // Press enter to continue
    textrenderer.waitForExit();
}

