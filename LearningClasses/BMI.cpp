//
//  BMI.cpp
//  Learning C++ classes
//
//  Created by Ziwei Wu on 2016-04-07.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
// function definition


#include "BMI.hpp"


BMI::BMI(){
    
    newHeight=0.0;
    newWeight=0;
    
    //string is default is null, so no need to initialize.
}

BMI::BMI(string name, double height, int weight){
    newName=name;
    newHeight=height;
    newWeight=weight;
    
}

BMI::~BMI(){
    
}

string BMI::getName() const{
    return newName;
}

double BMI::getHeight() const {
    
    return newHeight;
}

int BMI::getWeight() const {
    return newWeight;
}

void BMI::setName(string name){
    newName=name;
}

void BMI::setHeight(double height){
    newHeight=height;
}

void BMI::setWeight(int weight){
    newWeight=weight;
}

double BMI::calculatorBMI(){
    return (newWeight/(newHeight*newHeight));
}

