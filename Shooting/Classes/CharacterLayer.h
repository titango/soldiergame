//
//  CharacterLayer.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#ifndef __Shooting__CharacterLayer__
#define __Shooting__CharacterLayer__

#include <iostream>
#include "cocos2d.h"
#include "Player.h"
#include "Computer.h"

using namespace cocos2d;

class CharacterLayer : public Layer
{
    Player *player;
    Computer *computer;
    
public:
    virtual bool init();
    //    static Scene* scene;
    CREATE_FUNC(CharacterLayer);
};

#endif /* defined(__Shooting__CharacterLayer__) */
