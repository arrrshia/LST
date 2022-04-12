//
//  Quokka.hpp
//  LST
//
//  Created by Andrew Almasi on 4/12/22.
//

#ifndef Quokka_h
#define Quokka_h
#include "LST.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <atomic>

using namespace std;

class Quokka : public Pet
{
public:
    Quokka(){
        cout << "A QUOKKA!!!!" << endl;
    }
    
    void play();
    void tuck();
    void train();
    void feed();
    
    //void print();
    
private:
    int hunger;
    int sleepy;
    int intelligence;
    int happy;
};

#endif /* LST_h */
