//
//  main.cpp
//  The sum of odd number
//
//  Created by Ziwei Wu on 2016-02-08.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int m=0,n=0;
    int i=0;
    int sum=0;
    cout<<"input M and N, (N must > M, M must<300)"<<endl;
    cout<<"input M"<<endl;
    cin>>m;
    
    cout<<"input N"<<endl;
    cin>>n;
    
    for(i=m;i<n;i++){
        if(m%2!=0){
            i=i+2; sum=m+2+i;
        }
        else{
            i=i+2;sum=i+i-m+n+3;
        }
    }
    cout<<"sum of odd numbers is="<<sum<<endl;
    
    return 0;
}