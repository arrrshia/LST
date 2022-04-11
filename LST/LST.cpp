#include "LST.h"

Pet::Pet(){
    cout << "Congrats! You got a New Pet!" << endl;
    srand (time(NULL));
    
    int hung = rand() % 10 + 1;
    int slee = rand() % 10 + 1;
    int bore = rand() % 10 + 1;
    int happ = rand() % 10 + 1;
    setHunger(hung);
    setSleepy(slee);
    setBored(bore);
    setHappy(happ);
    cout << "These are the starting attributes for your pet!" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Hunger: " << getHunger() << endl;
    cout << "Sleep: " << getSleepy() << endl;
    cout << "Bored: " << getBored() << endl;
    cout << "Happy: " << getHappy() << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout << "Over time, these attributes will increase, making your pet hungry, sleepy, bored, and happy!" << endl;
    cout << "You can do actions to counteract the hunger, sleepiness, boredness, and improve over all happiness such as feeding your pet or tucking them into bed!" << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
}

