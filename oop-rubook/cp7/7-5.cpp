#include <iostream>

using namespace std;

class A {
    public:
        A() {
            cout << "A" << endl;
        }
        void f() {
            cout << "f()" << endl;
        }
};

class B: virtual public A {
    public:
        B() {
            cout << "B" << endl;
        }
};

class C: virtual public A {
    public:
        C() {
            cout << "C" << endl;
        }
};

class D: public B, public C {
    public:
        D() {
            cout << "D" << endl;
        }
        void show() {
            f();
        }
};

int main() {
    D m;
    m.show();
    return 0;
}