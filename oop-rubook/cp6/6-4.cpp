#include <iostream>

using namespace std;

class A {
    int a;
    public:
        A() {
            a = 0;
            cout << "A" << endl;
        }
        A(int i) {
            a = i;
            cout << a << endl;
        }
        ~A() {
            cout << "bye A" << endl;
        }
        void f() {
            a++;
            cout << "A::f()" << endl;
        }
};

class B: public A {
    int b;
    public:
        B() {
            b = 0;
            cout << "B" << endl;
        }
        B(int i) {
            b = i;
            cout << b << endl;
        }
        ~B() {
            cout << "bye B" << endl;
        }
        void f() {
            b++;
            cout << "B::f()" << endl;
        }
};

class C: public B {
    int c;
    public:
        C() {
            c = 0;
            cout << "C" << endl;
        }
        C(int i) {
            c = i;
            cout << c << endl;
        }
        ~C() {
            cout << "bye C" << endl;
        }
};

int main() {
    A x;
    B y;
    C z;
    A m(1);
    B n(2);
    C p(3);
    y.f();
    z.f();
    return 0;
}