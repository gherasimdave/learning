#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<string> lines;
    ifstream in("Input.txt");
    string line;
    while(getline(in, line)) {
        lines.push_back(line);
    }
    for(int i = 0; i < lines.size(); i++) {
        string input;
        cout << endl << "For next line press Enter: ";
        cin.get();
        cout << endl << lines[i];
    }
}