//
//  main.cpp
//  LST
//
//  Created by Andrew Almasi on 4/11/22.
//

#include <iostream>
#include "LST.h";
#include "Quokka.hpp";
using namespace std;

int main() {
    string input;
    string pet;
    cin >> pet;
    if (pet == "Quokka" || pet == "quokka")
    {
        Quokka base;
        do {
            cin >> input;
            if (input == "feed"){
                base.feed();
            } else if (input == "play"){
                base.play();
            } else if (input == "tuck into bed"){
                base.tuck();
            } else if (input == "train"){
                base.train();
            }
        } while (input != "quit");
    }

    return 0;
}
