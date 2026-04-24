#include <iostream>

using namespace std;

int main() {
    while(true) {
        cout << "give me an option: ";
        string input;
        cin >> input;
        if (input == "Left" || input == "left") {  
            cout << "You chose Left." << endl;
        } else if (input == "Right" || input == "right") {
            cout << "You chose Right." << endl;
        } else if (input == "Up" || input == "up") {
            cout << "You chose Up." << endl;
        } else if (input == "Down" || input == "down") {
            cout << "You chose Down." << endl;
        } else if (input == "Exit" || input == "exit") {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        } else {
            cout << "Invalid option, try again." << endl;
        }
    }
    return 0;
}