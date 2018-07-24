#include <iostream>

using namespace std;

int f1(){
    int x;
    x = 3;
    return x;
}

int *f2() {
    int *x = new int;
    *x = 3;
    return x;
}

int& f3() {
    int x;
    x = 3;
    return x;       // warning: reference to local variable 'x' returned
}

int main() {
    int p;
    p = f1();
    cout << p << endl;

    int *y;
    y = f2();
    cout << *y << endl;
    delete y;

    int q;
    q = f3();
    cout << q << endl;
    return 0;
}