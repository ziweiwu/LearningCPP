//
//  BMI.hpp
//  Learning C++ classes
//
//  Created by Ziwei Wu on 2016-04-07.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
// function declaration

#include<iostream>
#include<string>

using namespace std;

#ifndef BMI_hpp
#define BMI_hpp

class BMI{
    
public:
    //default constructor sets variable to null
    
    BMI();
    
    //overload constructor
    BMI(string, double, int);
    
    //destructor (destroy the function to free memory, important when they are multiple functions
    ~BMI();
    
    //Accessor Functions
     string getName() const ;
    //getName - returns name of patient
    
    double getHeight() const;
    //getHeight- return height of patient
    
    int getWeight() const;
    //getWeight- return weight of patient
    
    //Mutator function (set each variable to new value)
    
    
    void setName(string);
    //setName- setname of patient
    
    void setHeight(double);
    
    void setWeight(int);
    
    double calculatorBMI();
    //calculate BMI-calculate BMI for each patient.
    
private:
   //member variabes
    
    string newName;
    double newHeight;
    int newWeight;
    
    
    
    
    
    
    
    
    
};

#endif