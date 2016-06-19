//
//  main.cpp
//  car cateloge
//
//  Created by Ziwei Wu on 2016-03-01.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<string>
using namespace std;

struct cat{
    char carname[50];
    int makeyear;
};


int main()
{
    int n;
    cout<<"how many cars in your cateloge?"<<endl;
    cin>>n;
    
    cat *ps=new cat;
    
    
    for(int i=0;i<n;i++)
    {
        cout<<"Car No. "<<i+1<<endl;
        cout<<"Enter car name: "<<endl;
        cin.get();
        cin.get(ps->carname, 50);
        
        cout<<"Enter car year: "<<endl;
        cin>>ps->makeyear;
        
        
    }
    for (int i=0;i<n;i++)
    {
        cout<<"Car Number No."<<i+1<<endl;
        cout<<"car name: "<<ps->carname<<endl;
        cout<<"make year: "<<ps->makeyear<<"\n"<<endl;
    }
    
    delete ps;
    
    return 0;
    
}



