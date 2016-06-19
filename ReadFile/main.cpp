//
//  main.cpp
//  open a file and read text count
//
//  Created by Ziwei Wu on 2016-03-24.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include<fstream>
#include<cstdlib>

const int size=60;
int main()
{
    
    using namespace std;
    char filename[size];
    ifstream infile;
    
    cout<<"Enter name of data file: ";
    cin.get(filename,size);
    
    infile.open(filename);
    if(!infile.is_open()) //if can not open file, tell user about it
    {
        cout<<"Could not open the file "<<filename<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    
    char word;
   
    int count=0;
    
    infile>>word;  //read characters into words
    
    while(infile.good())    //while file read is acceptable for word char type, keep reading and keep a count, display the word and keep reading into words
    {
        ++count;
        
        cout<<word<<" ";
        
        infile>>word;
        
    }
    if(infile.eof())
        cout<<"End of file reached. \n";
        
        else if (infile.fail())
            cout<<"Input terminated by data mismatch.\n";
    
    else
        cout<<"input terminated for unknown reason.\n'";
    
    if (count==0)
        cout<<"No data processed. \n";
    else
    {
        cout<<"number of characters read; "<<count<<endl;
        
        
    }
    infile.close();

    
    
    
    
    return 0;
}
