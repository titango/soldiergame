//
//  BackgroundLayer.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#ifndef __Shooting__BackgroundLayer__
#define __Shooting__BackgroundLayer__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class BackgroundLayer : public Layer
{
    Sprite *backgroundImage;
    
public:
    virtual bool init();
    //    static Scene* scene;
    CREATE_FUNC(BackgroundLayer);
};

#endif /* defined(__Shooting__BackgroundLayer__) */
