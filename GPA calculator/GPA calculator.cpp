//
//  GPA calculator.cpp
//  GPA calculator
//
//  Created by Ziwei Wu on 2016-04-07.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include "GPA calculator.hpp"

GPA::GPA()
{
    newGrade=0;       //intitialization of constructor
    

}

GPA::GPA(string courseName, int grade){
    newCourseName=courseName;          //intitialization of overload constructor
    newGrade=grade;
    
}


GPA::~GPA(){
    
}

string GPA::getCourseName() const{
    
    return newCourseName;
}

int GPA::getGrade() const{
    return newGrade;
}

void GPA::setCourseName(string courseName){
    newCourseName=courseName;
}

void GPA::setGrade(int grade){
    newGrade=grade;
}
