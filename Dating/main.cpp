//
//  main.cpp
//  dating yes or no
//
//  Created by Ziwei Wu on 2016-02-08.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//



#include<iostream>
using namespace std;
int main()
{
    
    int date[3];
    int i=0;
    
cout<<"Which day are you inviting her to date? (1-7)? three tries"<<endl;

    for(i=0;i<3;i++)
        cin>>date[i];
    
    for(i=0;i<3;i++){
        if(date[i]==1||date[i]==3||date[i]==5){
            cout<<date[i]<<"=YES"<<endl;
            }
        else{
            cout<<date[i]<<"=No"<<endl;
        }
    }
    
    
    
    

    


    
    
    return 0;
}