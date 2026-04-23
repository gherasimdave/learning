#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    vector<string> v;
    ifstream in ("Fillvector.cpp");
    string line;
    while(getline(in, line)) {
        v.push_back(line);
    }
    string content;
    for(int i = 0; i < v.size(); i++) {
        content = content + " " + v[i];
    }
    cout << "Content file concatenated is:" << endl << content << endl;
}