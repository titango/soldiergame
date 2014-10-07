//
//  BackgroundLayer.cpp
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#include "BackgroundLayer.h"

bool BackgroundLayer::init()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    backgroundImage = Sprite::create("war_background.jpg");
    backgroundImage->setPosition(Point(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    //    mySprite->setAnchorPoint(Vec2(0, 0));
    
    // calculate the scaling factor to fill the screen size
    float rX = visibleSize.width /backgroundImage->getContentSize().width;
    float rY = visibleSize.height / backgroundImage->getContentSize().height;
    
    // set the scaling factor to the background image
    backgroundImage->setScaleX(rX);
    backgroundImage->setScaleY(rY);
    this->addChild(backgroundImage, -1);
    
    return true;
}
