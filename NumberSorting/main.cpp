//
//  main.cpp
//  even odd number seperation and sorting
//
//  Created by Ziwei Wu on 2016-02-03.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int input[10];
    int even[10];
    int odd[10];
    int i=0,j=0;
    
    cout<<"请输入10个整数"<<endl;
    for(i=0;i<10;i++)
        cin>>input[i];
    
    //two variable to store even and odd number//
    int evennum=0;
    int oddnum=0;
    
    for(i=0;i<10;i++)
        if (input[i]%2!=0){
        odd[oddnum]=input[i];
            oddnum++;}
        else{
          even[evennum]=input[i];
          evennum++;
        }
    
    for(i=0;i<oddnum;i++){
        for(j=i;j<oddnum;j++){
            if(odd[j]<odd[i]){
                int temp=odd[i];
                odd[i]=odd[j];
                odd[j]=temp;
            }
        }
    }
    for (i=0;i<evennum;i++){
        for(j=i;j<evennum;j++){
            if(even[j]>even[i]){
                    int temp=even[i];
                    even[i]=even[j];
                    even[j]=temp;
                    }
        }
    }
    
    
    
    
    cout<<"奇数:"<<endl;
    for(i=0;i<oddnum;i++)
    cout<<odd[i]<<endl;
    
    cout<<"偶数:"<<endl;
    for(i=0;i<evennum;i++)
    cout<<even[i]<<endl;
        

            return 0;
        }