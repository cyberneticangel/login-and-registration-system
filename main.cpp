#include <iostream>
#include <fstream>
#include <string>
#include "Register.h"
#include "Login.h"

int main() {
    int choice;
    std::cout << "Select a choice:\n1: Register\n2: Login\nYour choice: ";
    std::cin >> choice;

    if(choice == 1) {
        Register();
    }
    else if(choice == 2) {
        bool isLoggedIn = Login();

        if(!isLoggedIn) {
            std::cout << "Incorrect Login credentials. Try again\n";
            system("PAUSE");
            return false;
        }
        else {
            std::cout << "Login successful!\n";
            return true;
        }
    }

}


