//
//  Student.hpp
//  Class project(student GPA information）
//
//  Created by Ziwei Wu on 2016-04-12.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include<iostream>
#include<string>

class student{
    
private:
    char name[30];
    unsigned int age;
    unsigned int sn;//decided to use unsigned to expand the range of student number, so why not use unsigned for everything else.;
    
    unsigned int gpa1;
    unsigned int gpa2;
    unsigned int gpa3;
    unsigned int gpa4;
    
    static int count;
    
public:
    student();
    
    student(char[], unsigned int, unsigned int, unsigned int,unsigned int,unsigned int,unsigned int);
    
    ~student();
    
    void input();  //It turns out to be a good idea to implement functions inside of a class instead of in main()
    void output();
    
    static void printcount();
    
    

};





#endif /* Student_hpp */
