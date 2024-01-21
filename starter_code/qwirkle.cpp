#include "LinkedList.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#define EXIT_SUCCESS    0


void displayMenu();
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

      //2.2 Main Menu
      displayMenu();
      cin >> choice;
      //2.2.1 New Game
      if (choice == 1) {
         cout << "Starting a New Game..." << endl;
      //2.2.2 Load Game      
      } else if (choice == 2) {
         cout << "Loading Game..." << endl;
      //2.2.3 Credits      
      } else if (choice == 3) {
         cout << "Credits (Show student information):" << endl;
      //2.2.4 Quit    
      } else if (choice == 4) {
         cout << "Goodbye!" << endl;
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
   cout << "Enter your choice: ";
}
