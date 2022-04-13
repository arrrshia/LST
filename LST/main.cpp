//
//  main.cpp
//  LST
//
//  Created by Andrew Almasi on 4/11/22.
//

#include <iostream>
#include "LST.h"
#include "Quokka.hpp"
#include "Platypi.hpp"
#include "Otter.hpp"
#include <iostream>
using namespace std;

int main() {
    cout << "Would you like to load a file? Respond Y/N" << endl;
    string response;
    cin >> response;
    if (response == "N"){
        string input;
        string name;
        cout << "Welcome to PP! Choose your pet below!" << endl;
        cout << "Option 1: Quokka" << endl;
        cout << "Option 2: Platypi" << endl;
        cout << "Option 3: Otter" << endl;
        cout << "Choose your pet by typing down below!" << endl;
        string pet;
        cin >> pet;
        cout << "Whats their name?" << endl;
        cin >> name;
        cout << "-------------------------------------------------------------------------------------------" << endl;
        if (pet == "Quokka" || pet == "quokka")
        {
            cout << "Congrats! You got a New Quokka!" << endl;
            Quokka base;
            base.setName(name);
            base.intro();
            do {
                getline(cin, input);
                if (input == "feed" || input == "Feed"){
                    base.feed();
                } else if (input == "play" || input == "Play"){
                    base.play();
                } else if (input == "tuck into bed" || input == "Tuck into bed"){
                    base.tuck();
                } else if (input == "train" || input == "Train"){
                    base.train();
                } else if (input == "quit" || input == "Quit"){
                    ofstream fout; // Output file stream

                    // Open file
                    fout.open("data.txt");

                    if (!fout.is_open()) {
                        cout << "Could not open file data.txt." << endl;
                        return -1;
                    }

                      // Write to file
                    fout << base.getType() << " " << endl;
                    fout << base.getName() << " " << endl;
                    fout << base.getHunger() << " " << endl;
                    fout << base.getHappy() << " " << endl;
                    fout << base.getSleepy() << " " << endl;
                    fout << base.getIntelligence() << " " << endl;
                      // Done with file, so close
                    fout.close();
                    cout << "Successfully saved data. Say Bye to proceed." << endl;
                    return -1;
                }
            } while (input != "Bye" || input != "bye");
        }
        if (pet == "Platypi" || pet == "platypi")
        {
            cout << "Congrats! You got a New Platypi!" << endl;
            Platypi base;
            base.setName(name);
            base.intro();
            do {
                getline(cin, input);
                if (input == "feed" || input == "Feed"){
                    base.feed();
                } else if (input == "play" || input == "Play"){
                    base.play();
                } else if (input == "tuck into bed" || input == "Tuck into bed"){
                    base.tuck();
                } else if (input == "train" || input == "Train"){
                    base.train();
                } else if (input == "quit" || input == "Quit"){
                    ofstream fout; // Output file stream

                    // Open file
                    fout.open("data.txt");

                    if (!fout.is_open()) {
                        cout << "Could not open file data.txt." << endl;
                        return -1;
                    }

                      // Write to file
                    fout << base.getType() << " " << endl;
                    fout << base.getName() << " " << endl;
                    fout << base.getHunger() << " " << endl;
                    fout << base.getHappy() << " " << endl;
                    fout << base.getSleepy() << " " << endl;
                    fout << base.getIntelligence() << " " << endl;
                      // Done with file, so close
                    fout.close();
                    cout << "Successfully saved data. Say Bye to proceed." << endl;
                    return -1;
                }
            } while (input != "Bye" || input!= "bye");
        }
        if (pet == "Otter" || pet == "otter")
        {
            cout << "Congrats! You got a New Otter!" << endl;
            Otter base;
            base.setName(name);
            base.intro();
            do {
                getline(cin, input);
                if (input == "feed" || input == "Feed"){
                    base.feed();
                } else if (input == "play" || input == "Play"){
                    base.play();
                } else if (input == "tuck into bed" || input == "Tuck into bed"){
                    base.tuck();
                } else if (input == "train" || input == "Train"){
                    base.train();
                } else if (input == "quit" || input == "Quit"){
                    ofstream fout; // Output file stream

                    // Open file
                    fout.open("data.txt");

                    if (!fout.is_open()) {
                        cout << "Could not open file data.txt." << endl;
                        return -1;
                    }

                      // Write to file
                    fout << base.getType() << " " << endl;
                    fout << base.getName() << " " << endl;
                    fout << base.getHunger() << " " << endl;
                    fout << base.getHappy() << " " << endl;
                    fout << base.getSleepy() << " " << endl;
                    fout << base.getIntelligence() << " " << endl;
                      // Done with file, so close
                    fout.close();
                    cout << "Successfully saved data. Say Bye to proceed." << endl;
                    return -1;
                }
            } while (input != "Bye" || input != "bye");
            }
    }

    if (response == "Y") {
        string t; string n; int h; int p; int s; int i;
        ifstream fin;
        fin.open("data.txt");
        if (!(fin.is_open())){
            cout << "File not found" << endl;
            return -1;
        }
        fin >> t;
        fin >> n;
        fin >> h;
        fin >> p;
        fin >> s;
        fin >> i;
        if (t == "Quokka"){
            Quokka base(n, h, p, s, i);
            string input;
            do {
                getline(cin, input);
                if (input == "feed" || input == "Feed"){
                    base.feed();
                } else if (input == "play" || input == "Play"){
                    base.play();
                } else if (input == "tuck into bed" || input == "Tuck into bed"){
                    base.tuck();
                } else if (input == "train" || input == "Train"){
                    base.train();
                } else if (input == "quit" || input == "Quit"){
                    ofstream fout; // Output file stream

                    // Open file
                    fout.open("data.txt");

                    if (!fout.is_open()) {
                        cout << "Could not open file data.txt." << endl;
                        return -1;
                    }

                      // Write to file
                    fout << base.getType() << " " << endl;
                    fout << base.getName() << " " << endl;
                    fout << base.getHunger() << " " << endl;
                    fout << base.getHappy() << " " << endl;
                    fout << base.getSleepy() << " " << endl;
                    fout << base.getIntelligence() << " " << endl;
                      // Done with file, so close
                    fout.close();
                    cout << "Successfully saved data. Say Bye to proceed." << endl;
                    return -1;
                }
            } while (input != "quit");
        }
        if (t == "Otter"){
            Otter base(n, h, p, s, i);
            string input;
            do {
                getline(cin, input);
                if (input == "feed" || input == "Feed"){
                    base.feed();
                } else if (input == "play" || input == "Play"){
                    base.play();
                } else if (input == "tuck into bed" || input == "Tuck into bed"){
                    base.tuck();
                } else if (input == "train" || input == "Train"){
                    base.train();
                } else if (input == "quit" || input == "Quit"){
                    ofstream fout; // Output file stream

                    // Open file
                    fout.open("data.txt");

                    if (!fout.is_open()) {
                        cout << "Could not open file data.txt." << endl;
                        return -1;
                    }

                      // Write to file
                    fout << base.getType() << " " << endl;
                    fout << base.getName() << " " << endl;
                    fout << base.getHunger() << " " << endl;
                    fout << base.getHappy() << " " << endl;
                    fout << base.getSleepy() << " " << endl;
                    fout << base.getIntelligence() << " " << endl;
                      // Done with file, so close
                    fout.close();
                    cout << "Successfully saved data. Say Bye to proceed." << endl;
                    return -1;
                }
            } while (input != "quit");
        }
        if (t == "Platypi"){
            Platypi base(n, h, p, s, i);
            string input;
            do {
                getline(cin, input);
                if (input == "feed" || input == "Feed"){
                    base.feed();
                } else if (input == "play" || input == "Play"){
                    base.play();
                } else if (input == "tuck into bed" || input == "Tuck into bed"){
                    base.tuck();
                } else if (input == "train" || input == "Train"){
                    base.train();
                } else if (input == "quit" || input == "Quit"){
                    ofstream fout; // Output file stream

                    // Open file
                    fout.open("data.txt");

                    if (!fout.is_open()) {
                        cout << "Could not open file data.txt." << endl;
                        return -1;
                    }

                      // Write to file
                    fout << base.getType() << " " << endl;
                    fout << base.getName() << " " << endl;
                    fout << base.getHunger() << " " << endl;
                    fout << base.getHappy() << " " << endl;
                    fout << base.getSleepy() << " " << endl;
                    fout << base.getIntelligence() << " " << endl;
                      // Done with file, so close
                    fout.close();
                    cout << "Successfully saved data. Say Bye to proceed." << endl;
                    return -1;
                }
            } while (input != "quit");
return 0;
}
    }}
