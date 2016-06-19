//
//  main.cpp
//  Calculator area and perimeter (class)
//
//  Created by Ziwei Wu on 2016-04-11.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include"square.hpp"

int main()
{
    using namespace std;
    
    square newsquare;
    
    int w,l;
    
    
    
    cout<<"Enter width and length in meters. enter 'q' to quit "<<endl;
    cin>>w>>l;
    

    cout<<"Area: "<<newsquare.getArea(w,l)<<endl;
    cout<<"Perimeter: "<<newsquare.getPerimeter(w,l)<<endl;

      
       
  

        
    return 0;
}





