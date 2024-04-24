// Miranda Coninx
// ISIR - Sorbonne Universite / CNRS
// 08/04/2022

#include "rectangle.hpp"

//Question 3
//Methode pour calculer le périmètre
float Rectangle::perimeter() const  {
    return this->getHeight()*2 +this->getWidth()*2;
}

//Methode pour calculer l'aire
 float Rectangle::area()  {
    return this->getHeight()*this->getWidth();
 }

 //Methode pour savoir si intersection il y a
  bool Rectangle::intersects(const Rectangle& other) {
    float test= 0;
    if(this->getCenter().getX()<other.getCenter().getX()){
        test = this->getCenter().getX()+this->getWidth()/2 - other.getCenter().getX()+ other.getWidth()/2 ;
    }
    else {
        test =  other.getCenter().getX()+ other.getWidth()/2 - this->getCenter().getX()+this->getWidth()/2  ;

    }
    if (test<0){
        return true;
    }

    if(this->getCenter().getY()<other.getCenter().getY()){
        test = this->getCenter().getY()+this->getHeight()/2 - other.getCenter().getY()+ other.getHeight()/2 ;
    }
    else {
        test =  other.getCenter().getY()+ other.getHeight()/2 - this->getCenter().getY()+this->getHeight()/2  ;

    }
    if (test<0){
        return true;
    }

    return false;
  
  }  


