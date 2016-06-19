//
//  String.hpp
//  Operator overload = example
//
//  Created by Ziwei Wu on 2016-04-19.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#ifndef String_hpp
#define String_hpp


#include<iostream>
#include <stdio.h>


class string{
    
public:
    
    string();
    
    
    
    ~string();
    
    const char* printstr();
 
    char* operator=(const char*);
    
    string& operator=(const string&);
    
private:
    
    char *str;
    
    
    
    
    
    
    
};


#endif /* String_hpp */
