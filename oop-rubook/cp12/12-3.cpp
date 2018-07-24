#include <iostream>

using namespace std;

class A {
    public:
        A() { cout << "A" << endl; }
        ~A() { cout << "~A" << endl; }
};

class B {
    public:
        B() { cout << "B" << endl; }
        ~B() { cout << "~B" << endl; }
};

int main() {
    try {
        cout << "Hello A and B" << endl;
        A a;
        B b;
        throw(1);
        B bb;
        cout << "I am ok" << endl;
    } 
    catch (int) {
        cout << "catch int" << endl;
    }
    catch (...) {
        cout << "Umm..." << endl;
    }
    cout << "Happy" << endl;
    return 0;
}