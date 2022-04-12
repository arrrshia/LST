//
//  main.cpp
//  LST
//
//  Created by Andrew Almasi on 4/11/22.
//

#include <iostream>
#include "LST.h";
#include "Quokka.hpp";
#include "Platypi.hpp";
#include "Otter.hpp"
using namespace std;

int main() {
    string input;
    cout << "Welcome to PP! Choose your pet below!" << endl;
    cout << "Option 1: Quokka" << endl;
    cout << "Option 2: Platypi" << endl;
    cout << "Option 3: Otter" << endl;
    cout << "Choose your pet by typing in your option below!" << endl;
    string pet;
    cin >> pet;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    if (pet == "Quokka" || pet == "quokka")
    {
        cout << "Congrats! You got a New Quokka!" << endl;
        Quokka base;
        do {
            getline(cin, input);
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
    if (pet == "Platypi" || pet == "platypi")
    {
        cout << "Congrats! You got a New Platypi!" << endl;
        Platypi base;
        do {
            getline(cin, input);
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
    if (pet == "Otter" || pet == "otter")
    {
        cout << "Congrats! You got a New Otter!" << endl;
        Otter base;
        do {
            getline(cin, input);
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
