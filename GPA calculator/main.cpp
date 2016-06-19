//
//  main.cpp
//  GPA calculator
//
//  Created by Ziwei Wu on 2016-04-07.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<string>
#include<vector>
#include "GPA calculator.hpp"
void fillvector (vector<GPA>&);
void printvector(const vector<GPA>&);

using namespace std;

int main()
{
   
    vector<GPA> myGPA;
    
    fillvector(myGPA);
    
    printvector(myGPA);
    
   
    
    
    return 0;

}
void fillvector (vector<GPA>& myGPA)
{
    string courseName;
    int grade;
    
    cout<<"How many courses have you taken?"<<endl;
    
    int size;
    
    cin>>size;
    
    cout<<endl;
    
    for(unsigned i=0;i<size;i++)
    {
        cout<<"Please enter course name: ";
        cin>>courseName;
        
        cout<<"Please enter your mark (1-100): ";
        
        cin>>grade;
        
        GPA newGPA(courseName, grade);
        
        myGPA.push_back(newGPA);
        
        cout<<endl;
    }
    cout<<endl;
    
}
void printvector(const vector<GPA>& myGPA)
{
    int size=myGPA.size();
    for(unsigned i=0;i!=size;i++)
    {
        cout<<"Course Name: "<<myGPA[i].getCourseName();
        
        cout<<" "<<myGPA[i].getGrade()<<endl;
    }
    
    int sum=0;
    for(unsigned j=0;j!=size;j++)
    {
        sum=sum+myGPA[j].getGrade();
    }
    
    double average;
    average=sum/size;
    
    cout<<endl<<"Your average mark is: "<<average<<endl;
    
    cout<<endl;
}

