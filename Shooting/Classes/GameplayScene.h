//
//  GameplayScene.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/6/14.
//
//

#ifndef __Shooting__GameplayScene__
#define __Shooting__GameplayScene__

#include <iostream>
#include "cocos2d.h"
#include "Player.h"
#include "Wind.h"
#include "Computer.h"
#include "GameplayController.h"
#include "HealthBarLayer.h"
#include "BackgroundLayer.h"
#include "CharacterLayer.h"
#include "ButtonLayer.h"

USING_NS_CC;
class GameplayScene : public cocos2d::Layer
{
    Size visibleSize;
    Vec2 origin;
    HealthBarLayer *healthBarLayer;
    BackgroundLayer *backgroundLayer;
    CharacterLayer *characterLayer;
    ButtonLayer *buttonLayer;
    
public:
    static cocos2d::Scene *createScene();
    virtual bool init();
    
    //Implement the "static create() method manually
    CREATE_FUNC(GameplayScene);
    
    // a selector callback
//    void menuCloseCallback(cocos2d::Ref* pSender);
};

#endif /* defined(__Shooting__GameplayScene__) */
