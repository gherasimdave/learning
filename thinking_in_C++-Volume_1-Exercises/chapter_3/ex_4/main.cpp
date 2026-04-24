#include <iostream>

using namespace std;

int main() {
    while(true) {
        cout << "1. Left" << endl;
        cout << "2. Right" << endl;
        cout << "3. Up" << endl;
        cout << "4. Down" << endl;
        cout << "5. Exit" << endl;
        cout << "give me an option: ";
        int input;
        cin >> input;
        switch(input) {
            case 1:
                cout << "You chose Left." << endl;
                break;
            case 2:
                cout << "You chose Right." << endl;
                break;
            case 3:
                cout << "You chose Up." << endl;
                break;
            case 4:
                cout << "You chose Down." << endl;
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid option, try again." << endl;
        }
    }
}