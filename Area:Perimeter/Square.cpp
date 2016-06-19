//
//  Square.cpp
//  Calculator area and perimeter (class)
//
//  Created by Ziwei Wu on 2016-04-11.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include "Square.hpp"


square::square(){
    
   
};

square::square(int w, int l){
    
    w=0;
    
    l=0;
    
}


square::~square(){}


int square::getArea(int w, int l) const{
    
    return w*l;

}

int square::getPerimeter(int w, int l) const{
    return (w+l)*2;
}