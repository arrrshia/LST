//
//  Otter.hpp
//  LST
//
//  Created by Andrew Almasi on 4/12/22.
//

#ifndef Otter_h
#define Otter_h
#include "LST.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <atomic>

using namespace std;

class Otter : public Pet
{
public:
    Otter() : Pet(){
        cout << "" << endl;
    }
    Otter(string _name, int _hunger, int _happy, int _sleepy, int _intelligence) : Pet(_name, _hunger, _happy, _sleepy, _intelligence){
        cout << "Loading in " << _name << endl;
    }
    void play();
    void tuck();
    void train();
    void feed();
    string getType() {return "Otter";};

private:
    int hunger;
    int sleepy;
    int intelligence;
    int happy;
};

#endif /* LST_h */
