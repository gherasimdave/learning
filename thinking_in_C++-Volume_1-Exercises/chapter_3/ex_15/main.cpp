#include <iostream>

using namespace std;

int main() {
    typedef struct {
        string name;
        string citizenship;
        int age;
    } myStruct;

    myStruct theObject;
    theObject.name = "David";
    theObject.citizenship = "American";
    theObject.age = 45;

    cout << "Direct use:\ntheObject.name = " << theObject.name << endl;
    cout << "theObject.citizenship = " << theObject.citizenship << endl;
    cout << "theObject.age = " << theObject.age << endl;

    myStruct *pTheObject = &theObject;
    pTheObject->name = "Ana";
    pTheObject->citizenship = "Canadian";
    pTheObject->age = 56;

    cout << "\nPointer use:\npTheObject.name = " << pTheObject->name << endl;
    cout << "pTheObject.citizenship = " << pTheObject->citizenship << endl;
    cout << "pTheObject.age = " << pTheObject->age << endl;

    return 0;
}