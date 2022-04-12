#include "Quokka.hpp";


void Quokka::play(){
    setHappy(happy + 8);
    setSleepy(sleepy + 11);
    setHunger(hunger + 5);
    setIntelligence(intelligence - 5);
    print();
}

void Quokka::tuck(){
    setHappy(happy + 7);
    setSleepy(sleepy - 9);
    setHunger(hunger + 4);
    print();
}

void Quokka::train(){
    setHappy(happy - 5);
    setSleepy(sleepy + 13);
    setHunger(hunger + 10);
    setIntelligence(intelligence + 3);
    print();
}

void Quokka::feed(){
    setHunger(hunger - 3);
    setHappy(happy + 5);
    setSleepy(sleepy + 7);
    print();
}
