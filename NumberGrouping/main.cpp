//
//  main.cpp
//  even odd number grouping
//
//  Created by Ziwei Wu on 2016-02-02.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//



#include<iostream>
using namespace std;

int main()

{
    int all[10], odd[10],even[10];
    int i=0;
    for (i=0;i<10; i++)
        cin>>all[i];
    int numodd=0;
    int numeven=0;
    for (i=0;i<10;i++)
    {
        if(all[i]%2 !=0)
        {
            
            odd[numodd]=all[i];
            numodd++;
        }
        else
        {
            even[numeven]=all[i];
            numeven++;
        }
        
    }
    for (i=0; i<numodd; i++)
        cout<<"odd numbers:   "<<odd[i]<<endl;
    for (i=0; i<numeven; i++)
        cout<<"even numbers:  "<<even[i]<<endl;
    return 0;
}
