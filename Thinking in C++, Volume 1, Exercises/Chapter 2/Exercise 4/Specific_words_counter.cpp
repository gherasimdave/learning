#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int counter = 0;
    string word_to_find = "words";
    string word;
    ifstream in ("Input.txt");
    while(in >> word) {
        if(word == word_to_find) {
            counter++;
        }
    }
    cout << "The word \"" << word_to_find << "\" was found in file "
         << counter << " times" << endl;
}