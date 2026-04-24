#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    int count = 0;
    ifstream in("Input.txt");
    string word;
    while(in >> word) {
        count++;
    }
    cout << "The number of the words in file is: " << count << endl;
}