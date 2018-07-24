#include <iostream>

using namespace std;

class A {
    public:
        A() {
            cout << "A" << endl;
        }
        virtual ~A() {
            cout << "~A" << endl;
        }
        virtual void f() throw (int, double) {
            throw 3.0;
        }
};

class B: public A {
    public:
        B() {
            cout << "B" << endl;
        }
        ~B() {
            cout << "~B" << endl;
        }
        void f() throw(int) {
            throw 0;
        }
};

int main() {
    A *x = new B();
    try {
        x -> f();
        cout << "hello x" << endl;
    }
    catch (int i) {
        cout << "Exception: " << i << endl;
    }
    catch (double d) {
        cout << "Exception: " << d << endl;
    }
    catch (...) {
        cout << "Other exceptions" << endl;
    }
    cout << "Hello World" << endl;
    delete x;
    return 0;
}