#include <iostream>

using namespace std;

class A {
    int a, b;
    public:
        A(int i, int j) {
            a = i;
            b = j;
        }
        A operator*(A t) {
            return A(a*t.a, b*t.b);
        }
        friend ostream& operator << (ostream& os, const A &r) {
            cout << "(" << r.a << "." << r.b << ")" << endl;
            return os;
        }
};

template <class T>
T square(T x) {
    return (x*x);
}

int main() {
    A y(2, 3);
    cout << square(y) << endl;
    return 0;
}