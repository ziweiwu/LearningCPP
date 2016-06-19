//
//  main.cpp
//  Learning inheritance
//
//  Created by Ziwei Wu on 2016-04-20.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include<iostream>
#include "daughter.hpp"
#include "mother.hpp"
using namespace std;

int main()

{
    mother mom;
    
    mom.sayName();
    
    daughter tina;
    
    tina.sayName();
    
    return 0;
    
    
}