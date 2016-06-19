//
//  String.cpp
//  Operator overload = example
//
//  Created by Ziwei Wu on 2016-04-19.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include "String.hpp"

string::string(){};



const char* string::printstr(){
    return str;
}

char* string::operator=(const char* input){
    
    
    if(str) delete[]str;
    
    if(input){
        str=new char[strlen(input)+1];
        strcpy(str,input);
    }
    
    else
        
        str=NULL;
    
    
    return str;
}
    





string::~string(){
    if(str) delete[]str;
    
};


