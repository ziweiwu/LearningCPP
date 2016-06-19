//
//  main.cpp
//  chicken calculator
//
//  Created by Ziwei Wu on 2016-02-02.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>

using namespace std;
int main()
{
    int x,y,z,a,b,c;
    cout<<"一共可以要一百之鸡, 一共有一百块钱"<<endl;
    cout<<"母鸡价格:"<<endl;
    cin>>a;
    cout<<"公鸡价格:"<<endl;
    cin>>b;
    cout<<"小鸡价格:"<<endl;
    cin>>c;
    
    cout<<"\t 母鸡\t\t 公鸡 \t\t\t 小鸡"<<endl;
    for (x=0;x<=100;x++)
        for (y=0;y<=100;y++)
            for (z=0; z<=100;z++)
            {
                if ((x+y+z)==100)
                    if((a*x+b*y+c*z)==100)
                        cout<<"\t"<<x<<"\t\t"
                        <<y<<"\t\t\t"<<z<<endl;
            }
    return 0;
    
}