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
        cout << "A PLATYPI!!!!" << endl;
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
