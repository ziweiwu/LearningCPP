//
//  main.cpp
//  revalue of real estate (array to function)
//
//  Created by Ziwei Wu on 2016-03-27.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>

const int maxsize=10;

using namespace std;

int fill_array(double ar[], int limit);

void show_array(double ar[], int limit);

void revalue(double r, double ar[], int n);

int main()
{
    
    double properties[maxsize];
    
    int size=fill_array(properties,maxsize);
    
    show_array(properties, size);
    
    cout<<"Enter revaluation factor;";
    double factor;
    cin>>factor;
    revalue(factor,properties,size);
    
    show_array(properties, size);
    cout<<"Done."<<endl;
    return 0;




}

int fill_array(double ar[], int limit)
         {
             double temp;
             int i;
             for (i=0;i<limit;i++)
             {
                 cout<<"Enter value #"<<(i+1)<<": ";
                 cin>>temp;   //basically if bad input or negative input -> termination
                 if (!cin)   // bad input
                 {
                     cin.clear();
                     while(cin.get()!='\n')
                         continue;
                     cout<<"Bad input; input process terminated.\n";
                     break;
                 }
                 else if(temp<0)
                     break;
                 ar[i]=temp;      //looping ar[i] to take the value of temp
             }
             return i;
         }

void show_array(double ar[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Property #"<<(i+1)<<": $";
        cout<<ar[i]<<endl;
    }
    
    
}
void revalue(double r, double ar[], int n)
{
    for(int i=0;i<n;i++)
        ar[i]=ar[i]*r;
}


         
