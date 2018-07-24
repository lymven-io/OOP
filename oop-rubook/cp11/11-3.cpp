#include <iostream>

using namespace std;

class A {
    int a, b;
    public:
        A(int i, int j) {
            a = i; b = j;
        }
        bool operator == (A t) {
            return ((a == t.a && b==t.b) ? true : false);
        }
};

template <class T>
int find(T *x, T data, int size) {
    for (int i = 0; i < size; i++)
        if (x[i] == data)
            return i;
        return -1;
}

int main() {
    int x[] = {1, 2, 3, 4};
    int x1 = 2;
    int x2 = 5;

    float y[] = {5.0, 6.0, 7.0, 8.0};
    float y1 = 7.0;
    float y2 = 9.0;

    A z[] = {A(1, 2), A(2, 3), A(3, 4), A(4, 5)};
    A z1(4, 5);
    A z2(2, 2);

    cout << "x1 index=" << find(x, x1, 4) << endl;
    cout << "x2 index=" << find(x, x2, 4) << endl;

    cout << "y1 index=" << find(y, y1, 4) << endl;
    cout << "y2 index=" << find(y, y2, 4) << endl;

    cout << "z1 index=" << find(z, z1, 4) << endl;
    cout << "z2 index=" << find(z, z2, 4) << endl;
    return 0;
}