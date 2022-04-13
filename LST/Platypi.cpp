//
//  Platypi.cpp
//  LST
//
//  Created by Andrew Almasi on 4/12/22.
//

#include "Platypi.hpp"

void Platypi::play(){
    setHappy(getHappy() + 8);
    setSleepy(getSleepy() + 11);
    setHunger(getHunger() + 5);
    setIntelligence(getIntelligence() - 5);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They are chewing lumber" << endl;
    print();
}

void Platypi::tuck(){
    setHappy(getHappy() + 7);
    setSleepy(getSleepy() - 9);
    setHunger(getHunger() + 4);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They slept in their dam" << endl;
    print();
}

void Platypi::train(){
    setHappy(getHappy() - 5);
    setSleepy(getSleepy() + 13);
    setHunger(getHunger() + 10);
    setIntelligence(getIntelligence() + 3);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They made a dam" << endl;
    print();
}

void Platypi::feed(){
    setHunger(getHunger() - 3);
    setHappy(getHappy() + 5);
    setSleepy(getSleepy() + 7);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They ate fish" << endl;
    print();
}

