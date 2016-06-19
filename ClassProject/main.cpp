//
//  main.cpp
//  Class project(student GPA information）
//
//  Created by Ziwei Wu on 2016-04-12.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>

#include"student.hpp"

int student::count=0;


int main()
{
    
    student newStudent1;
    
    newStudent1.input();
    
    newStudent1.output();
    
    student newstudent2;
    
    
    std::cout<<"The size of class student is: "<<sizeof(newStudent1)<<" bytes."<<std::endl;
    
    newStudent1.printcount();
    
    return 0;
}
