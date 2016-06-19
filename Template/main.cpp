//
//  main.cpp
//  Learning template
//
//  Created by Ziwei Wu on 2016-05-13.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>

template <class first, class second> //two abitrary data type for the function template

first smaller(first a, second b){
    
    return (a<b?a:b); //if a is < than b, return a , else return b
    
}






int main(){
    
    double x;
    
    int y;
    

    
    x=12.5;
    y=10;
    
  
    
    std::cout<<smaller(x,y)<<std::endl;  //smaller (double x, int y), return which ever the value that is larger
    
    return 0;
    
    
    
    
}