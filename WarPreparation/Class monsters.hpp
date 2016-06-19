//
//  Class monsters.hpp
//  warcraft 1 preparation
//
//  Created by Ziwei Wu on 2016-04-14.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#ifndef Class_monsters_hpp
#define Class_monsters_hpp

#include <stdio.h>
#include <iostream>


class dragon{

public:
    
    dragon();
    ~dragon();
    
    int sn=000;
    
    int hp;
    
    int attack;

    void getHP(int);
};

class ninja{
    
public:
    
    ninja();
    ~ninja();
    int sn=000;
    
    int hp;
    
    int attack;
    
     void getHP(int);
    
};
class iceman{
    
public:
    
    iceman();
    ~iceman();
    int sn=000;
    
    int hp;
    
    int attack;
    
     void getHP(int);
};
class lion{

public:
    
    lion();
    
    
    ~lion();
    int sn=000;
    
    int hp;
    
    int attack;
    
     void getHP(int);
    
};
class wolf{

public:
    
    wolf();
    ~wolf();
    
    int sn=000;
    
    int hp;
    
    int attack;
    
     void getHP(int);
};


#endif /* Class_monsters_hpp */
