//
//  HealthBarLayer.cpp
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#include "HealthBarLayer.h"

bool HealthBarLayer::init()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    healthbar1 = Sprite::create("health_bar.png");
    healthbar1->setPosition(Point(200, visibleSize.height - 30));
    this->addChild(healthbar1);
    healthbar2 = Sprite::create("health_bar.png");
    healthbar2->setPosition(Point(visibleSize.width - 200, visibleSize.height - 30));
    this->addChild(healthbar2);
    
    return true;
}