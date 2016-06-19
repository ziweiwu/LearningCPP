//
//  GPA calculator.hpp
//  GPA calculator
//
//  Created by Ziwei Wu on 2016-04-07.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;

#ifndef GPA_calculator_hpp
#define GPA_calculator_hpp

class GPA{
    
public:
    GPA();  //constructor
    
    GPA(string, int);  //overload constructor
    
    ~GPA();  //deconstructor
    
    string getCourseName() const;
    
    int getGrade() const;
    
    void setCourseName(string);   //modifier
    
    void setGrade(int);  //modifier
    
    
    
    
private:
    
    string newCourseName;
    int newGrade;

    
    
};

#endif /* GPA_calculator_hpp */
