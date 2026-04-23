#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> v1, v2, v3;
    for(int i = 0; i < 25; i++) {
        v1.push_back(i * 0.25);
        v2.push_back(i * 1.35);
    }

    for(int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i] + v2[i]);
    }

    cout << "v1: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    cout << endl << "v2: ";
    for(int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }

    cout << endl << "v3: ";
    for(int i = 0; i < v3.size(); i++) {
        cout << v3[i] << " ";
    }
}