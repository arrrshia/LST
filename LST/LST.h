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
#include <thread>
#include <atomic>
#include <fstream>

using namespace std;

class Pet
{
public:
    Pet();
    Pet(string, int, int, int, int);
    
    void intro();
    
    int getHunger() { return hunger; };
    int getSleepy() { return sleepy; };
    int getIntelligence() { return intelligence; };
    int getHappy() { return happy; };
    string getName() { return name; };
    
    void setHunger(double h) { hunger = h; };
    void setSleepy(double h) { sleepy = h; };
    void setIntelligence(double h) { intelligence = h; };
    void setHappy(double h) { happy = h; };
    void setName(string _name) { name = _name; };
    
    virtual void play();
    virtual void tuck();
    virtual void train();
    virtual void feed();
    
    void print();
    
    virtual string getType() = 0;

private:
    int hunger;
    int sleepy;
    int intelligence;
    int happy;
    string name;
};

#endif /* LST_h */
