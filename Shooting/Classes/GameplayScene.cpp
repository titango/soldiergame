//
//  GameplayScene.cpp
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/6/14.
//
//

#include "GameplayScene.h"

USING_NS_CC;

Scene* GameplayScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = GameplayScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}

// on "init" - initialize instance
bool GameplayScene::init()
{
    //Super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    visibleSize = Director::getInstance()->getVisibleSize();
    origin = Director::getInstance()->getVisibleOrigin();
    
    //Add background image
    backgroundLayer = BackgroundLayer::create();
    this->addChild(backgroundLayer);
    
    //Add health bar
    healthBarLayer = HealthBarLayer::create();
    this->addChild(healthBarLayer);
    
    //Add Player
    characterLayer = CharacterLayer::create();
    this->addChild(characterLayer);
    
    //Add Button
    buttonLayer = ButtonLayer::create();
    this->addChild(buttonLayer);
        
//    auto action = MoveBy::create(3, Point(50,150));
//    
//    mySprite->runAction(action);
    
    return true;
}

/* THIS IS FROM THE HELLO WORLD AUTO CREATED
   JUST KEEP TO SEE IF IT IS USEFUL */

//void GameplayScene::menuCloseCallback(Ref* pSender)
//{
//#if (CC_TARGET_PLATFORM == CC_PLATFORM_WP8) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
//	MessageBox("You pressed the close button. Windows Store Apps do not implement a close button.","Alert");
//    return;
//#endif

//    Director::getInstance()->end();

//#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
//    exit(0);
//#endif
//}