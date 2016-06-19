//
//  main.cpp
//  Operator overload = example
//
//  Created by Ziwei Wu on 2016-04-19.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include"string.hpp"

int main()
{
    string str1, str2;
    
 
    str1="I am doing very good";
    
    std::cout<<"Printing string: "<<str1.printstr()<<std::endl;
    
    str2="I am doing great";
    
    std::cout<<"Printing string: "<<str2.printstr()<<std::endl;
    
  
    
    
    
    return 0;
}