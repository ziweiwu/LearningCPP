//
//  main.cpp
//  hour miniutes display
//
//  Created by Ziwei Wu on 2016-02-10.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>

void time(int, int);
int main()
{
    using namespace std;
    int hour, minutes;
    
    
    cout<<"Enter the number of hours: ";
    cin>>hour;
    
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    
    time(hour, minutes);
      return 0;
    
}


void time(int hr,int mins)
{
     using namespace std;
    cout<<"time: "<<hr<<":"<<mins<<endl;
  
}