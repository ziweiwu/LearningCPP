//
//  main.cpp
//  odds of winning lottery
//
//  Created by Ziwei Wu on 2016-03-27.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
using namespace std;
double odds(unsigned, unsigned);

int main()
{
    
    unsigned numbers;
    unsigned picks;
    
    cout<<"This is a lottery winning odds calculator, enter q"<<endl;
    
    cout<<"Input the numbers available to pick at each digit: \n";
    cin>>numbers;
    
    cout<<"Input the numbers of picks: \n";
    cin>>picks;
    
    while(numbers!='q' and picks!='q')
    {
  
    
    
    
    
    cout<<"The odds of winning this lottery is 1 in "<<odds(numbers, picks)<<endl;
    cout<<"Good luck!"<<endl;
        
        cout<<"\nInput the numbers available to pick at each digit: \n";
        cin>>numbers;
        
        cout<<"Input the numbers of picks: \n";
        cin>>picks;
        
        
    }
    
    
    
    
    
    
    
}
double odds(unsigned numbers, unsigned picks)
{
    int x,y;
    
    double results=1.0;
    for (x=numbers, y=picks;y>0;x--,y--)
        results=results*x/y;
    return results;

}