//
//  CharacterLayer.cpp
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#include "CharacterLayer.h"

bool CharacterLayer::init()
{
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();

    player = new Player();
    player->character = Sprite::create("Player.png");
    player->character->setPosition(Point(150 + origin.x, origin.y + 200));
    player->character->setScale(0.6f);
    
    computer = new Computer();
    computer->character = Sprite::create("Enemy.png");
    computer->character->setPosition(Point(visibleSize.width - 150, origin.y + 200));
    computer->character->setScale(0.6f);

    this->addChild(player->character);
    this->addChild(computer->character);
    return true;
}