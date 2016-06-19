//
//  Student.cpp
//  Class project(student GPA information）
//
//  Created by Ziwei Wu on 2016-04-12.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include "Student.hpp"


student::student(){
    
    std::cout<<"Constructor is called"<<std::endl;
    
    count++;
    
}

student::student(char name1[30] ,unsigned int a,unsigned int n,unsigned int g1,unsigned int g2,unsigned int g3,unsigned int g4){
    
    name[30]=name1[30];
    age=a;
    gpa1=g1;
    gpa2=g2;
    gpa3=g3;
    gpa4=g4;
  
    count++;
}




student::~student(){
    
    std::cout<<"Destructor is called"<<std::endl;
    
    count--;
}

void student::input(){
    std::cout<<"Please Enter Name, age, student number, year 1 gpa, year 2 gpa, year 3 gpa, year 4 gpa, seperated by a space."<<std::endl;
    
    std::cin>>name>>age>>sn>>gpa1>>gpa2>>gpa3>>gpa4;
    
    
}

void student::output(){
    
    std::cout<<"Student Name: "<<name<<std::endl;
    
    std::cout<<"Student age: "<<age<<std::endl;
    std::cout<<"Student number: "<<sn<<std::endl;
    std::cout<<"Average GPA: "<<(gpa1+gpa2+gpa3+gpa4)/4<<std::endl;
    
    
}

void student::printcount(){
    
    std::cout<<"Total number of student is: "<<count<<std::endl;
}
