//
//  HealthBarLayer.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/7/14.
//
//

#ifndef __Shooting__HealthBarLayer__
#define __Shooting__HealthBarLayer__

#include <iostream>
#include "cocos2d.h"

using namespace cocos2d;

class HealthBarLayer : public Layer
{
    Sprite *healthbar1;
    Sprite *healthbar2;
    
public:
    virtual bool init();
//    static Scene* scene;
    CREATE_FUNC(HealthBarLayer);
};

#endif /* defined(__Shooting__HealthBarLayer__) */
