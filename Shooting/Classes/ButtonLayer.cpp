//
//  ButtonLayer.cpp
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#include "ButtonLayer.h"

bool ButtonLayer::init()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    button = Sprite::create("shoot_button.png");
    button->setPosition(Point(visibleSize.width*2/3 + origin.x,
                              visibleSize.height/9 + origin.y + 10));
    button->setScale(0.3f);
    
    auto listener = EventListenerTouchOneByOne::create();
    listener->setSwallowTouches(true);
    
    listener->onTouchBegan = CC_CALLBACK_2(ButtonLayer::onTouchBegan,this);
    
    _eventDispatcher->addEventListenerWithSceneGraphPriority(listener, button);
    
    this->addChild(button);
    
    return true;
}

//Shoot button action
bool ButtonLayer::onTouchBegan(Touch *touch, Event *event)
{
    CCLOG("onTouchBegan x = %f, y = %f",touch->getLocation().x, touch->getLocation().y);
    return true;
}