//
//  main.cpp
//  cookie count
//
//  Created by Ziwei Wu on 2016-03-27.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
const int arsize=8;

using namespace std;

int sum_arr(const int*begin, const int*end);
int entercookies(int cookies[],int size);
void showcookies(int cookies[],int count);

int main()
{
    int cookies[arsize];
    
    
    int count=entercookies(cookies,arsize);
    
    cout<<"Numbers of entry is: "<<count<<endl;
    
    showcookies(cookies,count);
    

    
    int sum=sum_arr(cookies, cookies+count);
    
    cout<<"The sum of cookies is: "<<sum<<endl;
    
    
    return 0;
}

int sum_arr(const int*begin, const int*end)
{
    const int*pt;
    int total=0;
    for (pt=begin; pt !=end;pt++)
        total=total+*pt;
    return total;
    
}

int entercookies(int cookies[],int size)
{
    int temp;
    int count;
    for(int i=0;i<size;i++)
    {
        cout<<"Please enter numbers of cookies eaten"<<endl;
        cin>>temp;
        if(temp<0)
        {
            cout<<"program terminated"<<endl;
            break;
        }
        else if(!cin)
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
        break;
        }
        
        cookies[i]=temp;
        count++;
        
    }
    
    
    return count;
    }


void showcookies(int cookies[], int count)
{
    cout<<"List of Cookies consumptions"<<endl;
    
    for(int i=0;i<count;i++)
    {
    
        cout<<cookies[i]<<endl;
    }
    
}