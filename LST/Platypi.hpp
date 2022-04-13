//
//  Platypi.hpp
//  LST
//
//  Created by Andrew Almasi on 4/12/22.
//

#ifndef Platypi_h
#define Platypi_h
#include "LST.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <atomic>

using namespace std;

class Platypi : public Pet
{
public:
    Platypi() : Pet(){
        cout << "" << endl;
    }
    Platypi(string _name, int _hunger, int _happy, int _sleepy, int _intelligence) : Pet(_name, _hunger, _happy, _sleepy, _intelligence){
        cout << "Loading in " << _name << endl;
    }
    void play();
    void tuck();
    void train();
    void feed();
    
    string getType() {return "Platypi";};
    
    
private:
    int hunger;
    int sleepy;
    int intelligence;
    int happy;
};

#endif /* LST_h */
