//
//  main.cpp
//  warcraft 1 preparation
//
//  Created by Ziwei Wu on 2016-04-14.
//  Copyright © 2016 Ziwei Wu. All rights reserved.
//

#include <iostream>
#include"Class monsters.hpp"
#include"Red side.hpp"
#include"Blue Side.hpp"


int main()
{
    double lifeSource;
    
    int dragonhp,ninjahp,icemanhp,lionhp,wolfhp;
    
    red red1;
    
    blue blue1;
    
    dragon dragon1;
    
    ninja ninja1;
    
    iceman iceman1;
    
    lion lion1;
    
    wolf wolf1;
    
    std::cout<<"Please Enter Total life source for both sides: ";
    
    std::cin>>lifeSource;
    
     red1.inputSource(lifeSource);
    
     blue1.inputSource(lifeSource);
    
    std::cout<<"Please Enter the HP for dragon 、ninja、iceman、lion、wolf, seperate by space: ";
    
    std::cin>>dragonhp>>ninjahp>>icemanhp>>lionhp>>wolfhp;
    
    
    dragon1.getHP(dragonhp);
    ninja1.getHP(ninjahp);
    iceman1.getHP(icemanhp);
    lion1.getHP(lionhp);
    wolf1.getHP(wolfhp);
    
   while(red1.source>0)
    
   {
       std::cout<<std::endl<<"00"<<dragon1.sn<<" dragon "<<"HP "<<dragon1.hp<<" is borned in red base, there are "<<dragon1.sn+1<<" dragon"<<std::endl;
    red1.source=red1.source-dragon1.hp;
      
       
       
       ++dragon1.sn;
    
    std::cout<<std::endl<<"00"<<ninja1.sn<<" ninja "<<"HP "<<ninja1.hp<<" is borned in red base, there are "<<ninja1.sn+1<<" ninja"<<std::endl;
    red1.source=red1.source-ninja1.hp;
    ++ninja1.sn;
       
    std::cout<<std::endl<<"00"<<iceman1.sn<<" iceman "<<"HP "<<iceman1.hp<<" is borned in red base, there are "<<iceman1.sn+1<<" iceman"<<std::endl;
    red1.source=red1.source-iceman1.hp;
    ++iceman1.sn;
       
    std::cout<<std::endl<<"00"<<lion1.sn<<" lion "<<"HP "<<lion1.hp<<" is borned in red base, there are "<<lion1.sn+1<<" lion"<<std::endl;
    red1.source=red1.source-lion1.hp;
    ++lion1.sn;
       
    std::cout<<std::endl<<"00"<<wolf1.sn<<" wolf "<<"HP "<<wolf1.hp<<" is borned in red base, there are "<<wolf1.sn+1<<" wolf"<<std::endl;
    red1.source=red1.source-wolf1.hp;
    ++wolf1.sn;
       
       
   
    
           
       
       
   
        }
    if(red1.source<0)
    {
        std::cout<<std::endl<<"Resource is depleted, warrior can not be borned anymore."<<std::endl;
    
    }
    
    
    
    
    return 0;
    
}



