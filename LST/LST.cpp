#include "LST.h"

Pet::Pet(){
    srand (time(NULL));
    name = "Joe";
    int hung = rand() % 10 + 1;
    int slee = rand() % 10 + 1;
    int inte = rand() % 10 + 1;
    int happ = rand() % 10 + 1;
    setHunger(hung);
    setSleepy(slee);
    setIntelligence(inte);
    setHappy(happ);
}
Pet::Pet(string _name, int _hunger, int _happy, int _sleepy, int _intelligence){
    setName(_name);
    setHunger(_hunger);
    setHappy(_happy);
    setSleepy(_sleepy);
    setIntelligence(_intelligence);
}

void Pet::intro(){
    cout << "These are the starting attributes for " << getName() << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Hunger: " << getHunger() << endl;
    cout << "Sleep: " << getSleepy() << endl;
    cout << "Intelligence: " << getIntelligence() << endl;
    cout << "Happy: " << getHappy() << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Over time, these attributes will increase, making your pet hungry, sleepy, bored, and happy!" << endl;
    cout << "You can do actions to counteract the hunger, sleepiness, boredness, and improve over all happiness such as feeding your pet or tucking them into bed!" << endl;
    cout << "COMMANDS - TYPE THESE INTO CONSOLE TO PERFORM" << endl;
    cout << "Feed: Feed " << name << " their favorite food!" << endl;
    cout << "Tuck into bed: tuck " << name << " into their preferred sleeping arrangements!" << endl;
    cout << "Train: Train " << name << " and boost his intelligence!" << endl;
    cout << "Play: Play with " << name << "!" << endl;
    cout << "Quit: Either consume " << name << " or rent a duplex for them to live in until you come back." << endl;
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
    if (hunger < 0){
        cout << "Hunger is maxed out! They're stuffed!" << endl;
    } else if (hunger > 100){
        cout << "They're starving! Please feed " << name << endl;
    } else {
        cout << "Hunger: " << getHunger() << endl;
    }
    if (sleepy > 100){
        cout << "They're too sleepy! Please tuck " << name << " in!" << endl;
    } else if (sleepy < 0){
        cout << name << " is bursting with energy! No more sleep!" << endl;
    } else {
        cout << "Sleep: " << getSleepy() << endl;
    }
    if (intelligence < 0){
        cout << "Intelligence is so low! "<<name<<" is dumb! Please train them!" << endl;
    } else if (intelligence > 100){
        cout << name << " is a nerd! Oh no! Stop making them train!" << endl;
    } else {
        cout << "Intelligence: " << getIntelligence() << endl;
    }
    if (happy > 100){
        cout << "Happiness is maxed out! Good job!" << endl;
    } else if (happy < 0){
        cout << "Depression has gotten to "<<name<<" Please play with them" << endl;
    } else {
        cout << "Happiness: " << getHappy() << endl;
    }
    cout << "-------------------------------------------------------------------------------------------" << endl;
}


