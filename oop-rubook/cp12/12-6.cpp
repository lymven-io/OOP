#include <iostream>
using namespace std;

class A {
    public:
        A() { cout << "A" << endl; }
};
class B: public A {
    public:
        B() { cout << "B" << endl; }
};
class C: public B {
    public:
        C() { cout << "C" << endl; }
};
void f() throw (A) {
    B b;
    throw b;
}

int main() {
    try {
        f();
        cout << "in try block" << endl;
    }
    catch (C) {
        cout << "catch C" << endl;
    }
    catch (B) {
        cout << "catch B" << endl;
    }
    catch (A) {
        cout << "catch A" << endl;
    }
    catch (...) {
        cout << "no catch" << endl;
    }
    cout << "Hello World" << endl;
    return 0;
}