//
//  Square.hpp
//  Calculator area and perimeter (class)
//
//  Created by Ziwei Wu on 2016-04-11.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#ifndef Square_hpp
#define Square_hpp

#include <stdio.h>
#include<iostream>

class square{
    
public:
    
    square();
    
    square(int, int);
    
    ~square();
    
    
    
    
private:
    
    
    int nw;
    
    int nl;
    
    
    
    
    public:
    
    
 
    int getArea(int, int) const;
    
    int getPerimeter(int, int) const;
 
    
};


#endif /* Square_hpp */
