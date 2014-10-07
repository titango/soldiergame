//
//  Wind.h
//  Shooting
//
//  Created by Ngo Tan Thinh on 10/6/14.
//
//

#ifndef __Shooting__Wind__
#define __Shooting__Wind__

#include <iostream>
using namespace std;

class Wind
{
    /* PROPERTIES */
    //The power of the wind
    int power;
    
    //The current direction of the wind - will be selected from the pool
    string direction;
    
    //The total directions of the wind - could add more like NE, SE,etc...
    string directionPool[4] = {"N","S","E","W"};
    
    
    /* FUNCTIONS */
    // The function to change the power of the wind each turn
    void changePower();
    
    // The function to change the direction of the wind each turn
    void changeDirection();
};

#endif /* defined(__Shooting__Wind__) */
