#include <iostream>

using namespace std;

short int rat, mouse, hamster;
int dog, cat, bird, fish;
long int lion, tiger, bear;
float duck, goose, turkey;
double horse, donkey, mule;
long double elephant, giraffe, zebra;
char pig, cow, sheep;

void print(string name, long address) {
    cout << name << " at address: " << address << endl;
}

int main() {
    cout << "short int size: " << sizeof(short int) << " bytes" << endl;
    print("rat", (long)&rat);
    print("mouse", (long)&mouse);
    print("hamster", (long)&hamster);

    cout << "\nint size: " << sizeof(int) << " bytes" << endl;
    print("dog", (long)&dog);
    print("cat", (long)&cat);
    print("bird", (long)&bird);
    print("fish", (long)&fish);

    cout << "\nlong int size: " << sizeof(long int) << " bytes" << endl;
    print("lion", (long)&lion);
    print("tiger", (long)&tiger);
    print("bear", (long)&bear);

    cout << "\nfloat size: " << sizeof(float) << " bytes" << endl;
    print("duck", (long)&duck);
    print("goose", (long)&goose);
    print("turkey", (long)&turkey);

    cout << "\ndouble size: " << sizeof(double) << " bytes" << endl;
    print("horse", (long)&horse);
    print("donkey", (long)&donkey);
    print("mule", (long)&mule);

    cout << "\nlong double size: " << sizeof(long double) << " bytes" << endl;
    print("elephant", (long)&elephant);
    print("giraffe", (long)&giraffe);
    print("zebra", (long)&zebra);

    cout << "\nchar size: " << sizeof(char) << " bytes" << endl;
    print("pig", (long)&pig);
    print("cow", (long)&cow);
    print("sheep", (long)&sheep);
}