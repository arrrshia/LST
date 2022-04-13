//
//  Otter.cpp
//  LST
//
//  Created by Andrew Almasi on 4/12/22.
//

#include "Otter.hpp"

void Otter::play(){
    setHappy(getHappy() + 8);
    setSleepy(getSleepy() + 11);
    setHunger(getHunger() + 5);
    setIntelligence(getIntelligence() - 5);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They are swimming and making a big splash" << endl;
    print();
}

void Otter::tuck(){
    setHappy(getHappy() + 7);
    setSleepy(getSleepy() - 9);
    setHunger(getHunger() + 4);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They slept in their den peacefully" << endl;
    print();
}

void Otter::train(){
    setHappy(getHappy() - 5);
    setSleepy(getSleepy() + 13);
    setHunger(getHunger() + 10);
    setIntelligence(getIntelligence() + 3);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They went for a hunt" << endl;
    print();
}

void Otter::feed(){
    setHunger(getHunger() - 3);
    setHappy(getHappy() + 5);
    setSleepy(getSleepy() + 7);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They ate a frog!" << endl;
    print();
}
