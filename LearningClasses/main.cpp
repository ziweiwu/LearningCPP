//
//  main.cpp
//  Learning C++ classes
//
//  Created by Ziwei Wu on 2016-04-07.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<string>
#include "BMI.hpp"

using namespace std;

int main()
{
    string name;
    double height;
    int weight;
    
    cout<<"Please Enter Your name: "<<endl;
    cin>>name;
    
    cout<<"Please Enter your height in meters: "<<endl;
    cin>>height;
    
    cout<<"Please Enter your weight in kilogram: "<<endl;
    cin>>weight;
    
    BMI student_1(name,height,weight);
    
    cout<<endl<<"Patient Name: "<<student_1.getName()<<endl
    <<"Height: "<<student_1.getHeight()<<endl
    <<"Weight: "<<student_1.getWeight()<<endl;

    
    BMI student_2;
    
    
    
    student_2.setName(name);
    student_2.setHeight(height);
    student_2.setWeight(weight);
    
    
    cout<<endl<<"Please Enter Your name: "<<endl;
    cin>>name;
    
    cout<<"Please Enter your height in meters: "<<endl;
    cin>>height;
    
    cout<<"Please Enter your weight in kilogram: "<<endl;
    cin>>weight;
    
    cout<<endl<<"Patient Name: "<<student_2.getName()<<endl
       <<"Height: "<<student_2.getHeight()<<endl
    <<"Weight: "<<student_2.getWeight()<<endl<<"BMI: "<<student_2.calculatorBMI()
    <<endl;
    
    cout<<endl<<"Student 1 name: "<<student_1.getName()<<endl;
    
    return  0;
    
}