//
//  main.cpp
//  monthly sales to year total sale
//
//  Created by Ziwei Wu on 2016-03-01.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
const int months=12;
const int years=3;
int main()
{
    using namespace std;
    
    const char*month[months]=
    {
        "January",
        "Feburary",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int sales=0;
    int sum=0;
    int year[years];
   
    for(int y=0;y<years;y++)
    {
        cout<<"Year "<<y+1<<endl;
        
         for(int m=0;m<months;m++)
        {
        cout<<"Please enter the sale amount for "<<month[m]<<endl;
        
        cin>>sales;
        
            sum=sum+sales;
            
        }
        year[y]=sum;
        
        
    }
    
    for(int y=0;y<years;y++)
    {
        cout<<"total sales for the year "<<y+1<<" is $"<<year[y]<<endl;
        
    }
    
    int totalsale=0;
    for(int y=0;y<years;y++)
        totalsale=totalsale+year[y];
    cout<<"total sale for all "<<years<<" is $"<<totalsale<<endl;
    
    
    return 0;
    
}