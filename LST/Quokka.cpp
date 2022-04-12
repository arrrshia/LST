#include "Quokka.hpp";


void Quokka::play(){
    setHappy(getHappy() + 8);
    setSleepy(getSleepy() + 11);
    setHunger(getHunger() + 5);
    setIntelligence(getIntelligence() - 5);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They are running around, frolicking" << endl;
    print();
}

void Quokka::tuck(){
    setHappy(getHappy() + 7);
    setSleepy(getSleepy() - 9);
    setHunger(getHunger() + 4);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They are sleeping under a shady bush" << endl;
    print();
}

void Quokka::train(){
    setHappy(getHappy() - 5);
    setSleepy(getSleepy() + 13);
    setHunger(getHunger() + 10);
    setIntelligence(getIntelligence() + 3);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They climbed a tree" << endl;
    print();
}

void Quokka::feed(){
    setHunger(getHunger() - 3);
    setHappy(getHappy() + 5);
    setSleepy(getSleepy() + 7);
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "They ate some leaves off a tree" << endl;
    print();
}

void Quokka::print(){
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
