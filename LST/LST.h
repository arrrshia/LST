//
//  LST.h
//  LST
//
//  Created by Andrew Almasi on 4/11/22.
//

#ifndef LST_h
#define LST_h
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Pet
{
public:
    Pet();
    int getHunger() { return hunger; };
    int getSleepy() { return sleepy; };
    int getBored() { return bored; };
    int getHappy() { return happy; };
    
    void setHunger(double h) { hunger = h; };
    void setSleepy(double h) { sleepy = h; };
    void setBored(double h) { bored = h; };
    void setHappy(double h) { happy = h; };
private:
    int hunger;
    int sleepy;
    int bored;
    int happy;
};

#endif /* LST_h */
