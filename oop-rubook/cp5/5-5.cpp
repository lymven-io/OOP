#include <iostream>

using namespace std;

class B;
class A
{
    int a;
    public:
        A() { a = 1; }
        // friend int add(A, B);
        void setA(int i) { a = i; }
        int getA() { return a; }
};

class B {
    int b;
    public:
        B() { b = 2; }
        friend int add(A, B);
};

int add(A x, B y) {
    A z;
    z.setA(x.getA() + y.b);
    return (z.getA());
}

int main()
{
    A s;
    B t;
    cout << add(s, t) << endl;
}