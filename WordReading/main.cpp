//
//  main.cpp
//  word reading loop
//
//  Created by Ziwei Wu on 2016-03-01.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>

int main()
{
    using namespace std;
    
    int r=0;
    cout<<"please enter the number of row that you want to display:\n";
    cin>>r;
    cout<<endl;
    
    char matrix[r];
    
    int i=0;
    int j=0;
    int z=r;
    
    for(i=0;i<r;i++)
    {
        
        for(j=0;j<r-i-1;j++)
        {
            matrix[j]='.';
            cout<<matrix[j];
        }
        
        for(z=1;z<=i+1;z++)
        {
            matrix[z]='*';
            cout<<matrix[z];
            
        }
    
        cout<<endl;
        
    }
    
    
    
    
    cout<<endl;
    
    return 0;
    
    
    
}




