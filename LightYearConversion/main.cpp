//
//  main.cpp
//  Light year to astronomical units
//
//  Created by Ziwei Wu on 2016-02-10.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<iomanip>

double convert(double);

int main()
{
    using namespace std;
    double ly;
    
 cout<<"enter the number of light year: ";
     cin>>ly;
    cout<<endl;
    
    double au=convert(ly);

  
    cout<<ly<<" light years = "<<fixed<<setprecision(0)<<au<<" astronomical units."<<endl;
    cout<<endl;
    return 0;
}
double convert(double lightyear)
{
    return 63240*lightyear;
}