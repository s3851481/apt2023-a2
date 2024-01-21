#include "LinkedList.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::string;
#define EXIT_SUCCESS    0


void displayMenu();
bool isValidPlayerName(const string& name);

int main(void) {
   LinkedList* list = new LinkedList();
   delete list;

    //std::cout << "TODO: Implement Qwirkle!" << std::endl;
    //2.1 Launch
   cout << "Welcome to Qwirkle!" << endl;
   cout << "-----------------------" << endl;

    int choice = 0;
    bool quit = false;

    while (!quit) {
        displayMenu();
        cout << "> ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nStarting a New Game" << endl;

            // Player 1
            string player1;
            do {
                cout << "\nEnter a name for player 1 (uppercase characters only): ";
                cin >> player1;
            } while (!isValidPlayerName(player1));

            // Player 2
            string player2;
            do {
                cout << "\nEnter a name for player 2 (uppercase characters only): ";
                cin >> player2;
            } while (!isValidPlayerName(player2));

            cout << "\nLet's Play!" << endl;
            // Add code to proceed with normal gameplay
        } else if (choice == 2) {
            cout << "Loading Game..." << endl;
            // Add code for loading a game
        } else if (choice == 3) {
            cout << "Credits (Show student information):" << endl;
            // Add code to display student information
        } else if (choice == 4) {
            cout << "Quitting the game. Goodbye!" << endl;
            quit = true;
        } else {
            cout << "Invalid choice. Please enter a valid option." << endl;
        }
    }

    return EXIT_SUCCESS;
}

void displayMenu() {
   cout << "\nMenu" << endl;
   cout << "1. New Game" << endl;
   cout << "2. Load Game" << endl;
   cout << "3. Credits (Show student information)" << endl;
   cout << "4. Quit" << endl;
}


// Function to check if a player name is valid
bool isValidPlayerName(const string& name) {
    for (char c : name) {
      //check if we can use this
        if (!isupper(c) || !isalpha(c)) {
            cout << "Invalid name. Please enter uppercase letters only." << endl;
            return false;
        }
    }
    return true;
}