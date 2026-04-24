#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <float> values;
    for(int i = 0; i < 25; i++) {
        values.push_back(i * 0.25);
    }
    for (int i = 0; i < values.size(); i++) {
        cout << values[i] << " ";
    }
    cout << endl;
}