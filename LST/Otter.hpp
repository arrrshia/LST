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
        cout << "AN OTTER!!!!" << endl;
    }
    
    void play();
    void tuck();
    void train();
    void feed();
    void print();
    
    //void print();
    
private:
    int hunger;
    int sleepy;
    int intelligence;
    int happy;
};

#endif /* LST_h */
