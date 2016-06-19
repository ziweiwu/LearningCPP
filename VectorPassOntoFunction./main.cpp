//
//  main.cpp
//  Learning Vector pass onto functions.
//
//  Created by Ziwei Wu on 2016-04-06.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void fillVector(vector<int> &);
void printVector(const vector<int> &);
void reverseVector(const vector<int> &);
void printEvenNumbers(const vector<int>&);
void printOddNumbers(const vector<int>&);
void replace(vector<int>&);
//function prototypes

int main()
{
   
    
    vector<int> myVector;
    
    fillVector(myVector);
    
    printVector(myVector);
    
    reverseVector(myVector);
    
    printEvenNumbers(myVector);
    
    replace(myVector);
    
    return 0;
    
}

void fillVector(vector<int> &myNewVector)
{
    cout<<"Please enter some numbers. type -1 to stop. \n";
    int input;
    cin>>input;
    
    while(input!=-1)
    {
        myNewVector.push_back(input);
        
        cin>>input;
        
    }
    
    cout<<endl;
}

void printVector(const vector<int> &myNewVector)
{
    cout<<"Vector: ";
    
    for(unsigned i=0; i!=myNewVector.size();i++)
    {
        cout<<myNewVector[i]<<" ";
    }
        cout<<endl;
    
    
}

void reverseVector(const vector<int> &myNewVector)
{
    cout<<"Vector Reversed: ";
    for(unsigned i=myNewVector.size();i!=0;i--)
    {
        cout<<myNewVector[i-1]<<" ";
    }
    cout<<endl;
}

void printEvenNumbers(const vector<int> &myNewVector)
{
    cout<<"Printer even numbers: ";
    for(unsigned int i=0;i!=myNewVector.size();i++)
    {
        if(myNewVector[i]%2==0)
            cout<<myNewVector[i]<<" ";
    }
    cout<<endl;
    
}

void replace(vector<int> &myNewVector)
{
    int a=0;
    int b=0;
    cout<<"Type Number you want to replace, and number to replace with"<<endl;
    
    for(unsigned int i=0;i!=myNewVector.size(); i++)
    {
        cout<<myNewVector[i]<<" ";
        b=myNewVector[i];
        
        cin>>a;
        myNewVector[i]=a;
        
        cout<<b<<" has been replaced with "<<a<<endl;
    }
    
   cout<<"New array: ";
   for(unsigned int i=0;i!=myNewVector.size(); i++)
       cout<<myNewVector[i]<<" ";
    cout<<endl;
    
}