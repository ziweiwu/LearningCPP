//
//  main.cpp
//  Function overload in class
//
//  Created by Ziwei Wu on 2016-04-15.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<string>

//create a class name string to hold a char pointer nameed str
class string{
    
private:
    
    char *str;//char pointer str
    
public:
    string(): str(NULL){} //constructor template
    
    const char *c_str(){
        return str;
    }          //function to return a pointer, make it const to safe guard data
    
    char *operator=(const char *s);  //function to define "=" operator overload
   
    
    ~string();
};

//class function is created to represent operator overload, to read a string into a class.string variable.

char *string::operator=(const char*s){
    if(str) delete[]str; //if str is not null, we need delete the memory space to hold a new value. used when same function is used the second time to different value.
    if(s){
        str=new char[strlen(s)+1]; //if s has value, create a new memory space to hold str
        strcpy(str,s); //if s has value, copy to str.
        
    }
    
    else
        str=NULL;
        
        return str;
    
    }


    
    string::~string(){
    if(str) delete[]str; //destructor: if str is not null, delete the memory space
};

int main(){
    string s;

    s="Good luck";
    std::cout<<s.c_str()<<std::endl;
    
    s="Shenzhou 8!";
    std::cout<<s.c_str()<<std::endl;
    return 0;
    
    
}