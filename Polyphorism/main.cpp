//
//  main.cpp
//  Learning polyphorism
//
//  Created by Ziwei Wu on 2016-05-13.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//


#include<iostream>
using namespace std;

class enemy{
    
protected:
    int attackpower;
    
public:
    
    virtual void attack()=0;    //this is a Pure virtual function, the ninja and and samurai class must have overriding function or else it would end in error//
    void setAttackPower(int a)
    {
        attackpower=a;
    }
    //because the class enemy contains a PURE virtual function, this class is called a ABSTRACT class.
    
};

class ninja: public enemy{
    
public:
    void attack(){
        cout<<"Ninja is attack you with ninja star, your HP is down by "<<attackpower<<endl;
    }
    
};

class samurai: public enemy{
public:
    void attack(){
        cout<<"Samurai is attack you with sword, your HP is down by "<<attackpower<<endl;
    }
};






int main()
{
    ninja n;
    samurai s;
    
    enemy *enemy1=&n; //The class enemy1 is points to the address of class ninja
    enemy *enemy2=&s;
    
    enemy1->setAttackPower(30);  //set the attack power for class enemy 1
    enemy2->setAttackPower(40);
    
    n.attack();  //call the attack function for ninja class
    
    s.attack();
    
    enemy1->attack(); //call the attack function for class enemy 1 which pure virutal function is override by attack function in ninja class due to earlier pointer to reference. 
    enemy2->attack();
    
    return 0;
    
    
    
}
