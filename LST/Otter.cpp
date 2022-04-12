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

void Otter::print(){
    cout << "-------------------------------------------------------------------------------------------" << endl;
    if (getHunger() < 0){
        cout << "Hunger is maxed out! Their tummy is stuffed!" << endl;
    } else if (getHunger() > 100){
        cout << "Theyre Starving, please feed them!" << endl;
    } else {
        cout << "Hunger: " << getHunger() << endl;
    }
    if (getSleepy() > 100){
        cout << "They're too sleepy! Please tuck them in!" << endl;
    } else {
        cout << "Sleep: " << getSleepy() << endl;
    }
    if (getIntelligence() < 0){
        cout << "Intelligence is so low! They're dumb! Please train them!" << endl;
    } else {
        cout << "Intelligence: " << getIntelligence() << endl;
    }
    if (getHappy() > 100){
        cout << "Happiness is maxed out!" << endl;
    } else if (getHappy() < 0){
        cout << "They're depressed! Play with them please!" << endl;
    } else {
        cout << "Happiness: " << getHappy() << endl;
    }
    cout << "-------------------------------------------------------------------------------------------" << endl;
}
