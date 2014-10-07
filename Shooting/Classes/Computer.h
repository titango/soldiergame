//
//  Computer.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/6/14.
//
//

#ifndef __Shooting__Computer__
#define __Shooting__Computer__

#include <iostream>
#include "Player.h"

class Computer : public Player
{
    //The level of difficulty - range from 0-2 max - the higher the more
    //accurate the computer can hit player.
    int difficultyLevel;
    
    //Will determine the power when shooting player
    //Also depend on difficulty level
    void randomPower();
    
};

#endif /* defined(__Shooting__Computer__) */
