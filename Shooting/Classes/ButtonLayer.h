//
//  ButtonLayer.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#ifndef __Shooting__ButtonLayer__
#define __Shooting__ButtonLayer__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class ButtonLayer : public Layer
{
    Sprite *button;
    
public:
    virtual bool init();
    //    static Scene* scene;
    CREATE_FUNC(ButtonLayer);
    
    bool onTouchBegan(Touch *touch, Event *event);
};
#endif /* defined(__Shooting__ButtonLayer__) */