//
//  main.cpp
//  milage calculator
//
//  Created by Ziwei Wu on 2016-02-11.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<iomanip>

double fueleco(double, double);//prototype

int main()
{
    using namespace std;
    double distance=0;
    double usage=0;
    
    cout<<"How many kilometers did you drive? ";
    cin>>distance;
    
    cout<<"\nHow many litres of gas did your car use?";
    cin>>usage;
    
    fueleco(usage, distance);
    
    double fe=fueleco(usage, distance);
    
    cout<<"\nThe fuel economy of your car is:  "<<fixed<<setprecision(2)<<fe<< " litres per 100 kilometers"<<endl;
    
    

    return 0;
}

double fueleco(double u, double d)//function
{
    return u*100/d;
}