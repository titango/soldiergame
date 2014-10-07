//
//  Player.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/6/14.
//
//

#ifndef __Shooting__Player__
#define __Shooting__Player__

#include <iostream>
#include "cocos2d.h"

using namespace std;
using namespace cocos2d;

class Player
{
    /* PROPERTIES */
    //Health of character
    int health;
    
    //The initial position
    Vec2 coordinate;
    
    //Current power
    int currentPower;
    
    //Current special ability
    string specialAbility;
    
public:
    //The sprite
    Sprite *character;
    
    /* FUNCTIONS */
    
    static Player* create();
    
    //Shoot the projectile to the other
    void fireProjectile();
    
    //Will perform certain ability
    void performAbility(string abilityName);
};

#endif /* defined(__Shooting__Player__) */
