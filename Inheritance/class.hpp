//
//  class.hpp
//  Learning inheritance
//
//  Created by Ziwei Wu on 2016-04-20.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#ifndef class_hpp
#define class_hpp

#include <stdio.h>
#include<iostream>
#include<string>



class CStudent {
private:
    std::string name;
    std::string id;
    char gender;
    int age;
    
public:
    void PrintInfo();
    void SetInfo(std::string name,  std::string id, int age, char gender);
    
    std::string GetName(){
        return name;
    }
};

class CUndergraduateStudent:public CStudent
{
private:
    std::string department1;
    
public:
    void QualifiedForBaoyan()
    {
        std::cout<<"qualified for baoyan"<<std::endl;
    }
    
    void PrintInfo(){
        CStudent::PrintInfo();   //use public printinfo, then add department
        std::cout<<"Department: "<<department1<<std::endl;
    }
    
    void SetInfo(std::string name,  std::string id, int age, char gender,
                 std::string department)
    
    {
        CStudent::SetInfo(name, id, age, gender);//use public setinfo, except for department
        department1=department;
        
    }
    
};




#endif /* class_hpp */
