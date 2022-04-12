#include "LST.h"

Pet::Pet(){
    srand (time(NULL));
    
    int hung = rand() % 10 + 1;
    int slee = rand() % 10 + 1;
    int inte = rand() % 10 + 1;
    int happ = rand() % 10 + 1;
    setHunger(hung);
    setSleepy(slee);
    setIntelligence(inte);
    setHappy(happ);
    cout << "These are the starting attributes for your pet!" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Hunger: " << getHunger() << endl;
    cout << "Sleep: " << getSleepy() << endl;
    cout << "Intelligence: " << getIntelligence() << endl;
    cout << "Happy: " << getHappy() << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Over time, these attributes will increase, making your pet hungry, sleepy, bored, and happy!" << endl;
    cout << "You can do actions to counteract the hunger, sleepiness, boredness, and improve over all happiness such as feeding your pet or tucking them into bed!" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
}

void Pet::play(){
    setHappy(happy + 5);
    setSleepy(sleepy + 8);
    setHunger(hunger + 10);
    setIntelligence(intelligence - 5);
    print();
}

void Pet::tuck(){
    setHappy(happy + 5);
    setSleepy(sleepy - 10);
    setHunger(hunger + 5);
    print();
}

void Pet::train(){
    setHappy(happy - 5);
    setSleepy(sleepy + 10);
    setHunger(hunger + 5);
    setIntelligence(intelligence + 10);
    print();
}

void Pet::feed(){
    setHunger(hunger - 5);
    setHappy(happy + 3);
    setSleepy(sleepy + 10);
    print();
}

void Pet::print(){
    cout << "-------------------------------------------------------------------------------------------" << endl;
    if (hunger > 100){
        cout << "Hunger is maxed out! They're stuffed!" << endl;
    } else {
        cout << "Hunger: " << getHunger() << endl;
    }
    if (sleepy > 100){
        cout << "They're too sleepy! Please tuck them in!" << endl;
    } else {
        cout << "Sleep: " << getSleepy() << endl;
    }
    if (intelligence < 0){
        cout << "Intelligence is so low! They're dumb! Please train them!" << endl;
    } else {
        cout << "Intelligence: " << getIntelligence() << endl;
    }
    if (happy > 100){
        cout << "Happiness is maxed out! Good job!" << endl;
    } else if (happy < 0){
        cout << "Depression has gotten to them. Please play with them" << endl;
    } else {
        cout << "Happiness: " << getHappy() << endl;
    }
    cout << "-------------------------------------------------------------------------------------------" << endl;
}

