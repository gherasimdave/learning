#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<float> v1;
    for(int i = 0; i < 25; i++) {
        v1.push_back(i * 1.35);
    }

    cout << "Vector before multiplication:";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }

    for(int i = 0; i < v1.size(); i++) {
        v1[i] = v1[i] * v1[i];
    }

    cout << "\nVector after multiplication: ";
    for(int i = 0; i < v1.size(); i++) {
        cout << v1[i] << " ";
    }
}