#include "LST.h"

Pet::Pet(){
    cout << "Congrats! You got a New Pet!" << endl;
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
    setHappy(happy + 10);
    setSleepy(sleepy + 15);
    setHunger(hunger + 20);
    setIntelligence(intelligence - 10);
}

void Pet::tuck(){
    setHappy(happy + 5);
    setSleepy(sleepy - 20);
    setHunger(hunger + 10);
}

void Pet::train(){
    setHappy(happy - 5);
    setSleepy(sleepy + 20);
    setHunger(hunger + 15);
    setIntelligence(intelligence + 20);
}

void Pet::feed(){
    setHunger(hunger - 15);
    setHappy(happy + 3);
    setSleepy(sleepy + 10);
}
