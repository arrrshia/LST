//
//  main.cpp
//  LST
//
//  Created by Andrew Almasi on 4/11/22.
//

#include <iostream>
#include "LST.h";
using namespace std;

int main() {
    string input;
    do {
        Pet base;
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
    return 0;
}
