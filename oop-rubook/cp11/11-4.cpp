#include <iostream>

using namespace std;

class A {
    int a, b;
    public:
        A(int i, int j) {
            a = i; b = j;
        }
        bool operator == (A t) {
            return ((a == t.a && b == t.b) ? true : false);
        }
        friend bool operator == (A t, int k);
        friend bool operator == (int k, A t);
        friend bool operator == (A t, float k);
        friend bool operator == (float k, A t);
};

bool operator == (A t, int k) {
    return ((k == t.a && k == t.b) ? true : false);
}

bool operator == (int k, A t) {
    return ((k == t.a && k == t.b) ? true : false);
}
bool operator == (A t, float k) {
    return false;
}
bool operator == (float k, A t) {
    return false;
}

template <class T, class S>
int find(T *x, S data, int size) {
    for (int i = 0; i < size; i++)
        if (x[i] == data)
            return i;
        return -1;
}

int main() {
    int x[] = {3, 4, 5, 6, 7,};
    int x1 = 6;
    float y[] = {3.0, 5.0, 6.0, 7.0, 8.0};
    float y1 = 4.0;

    A z[] = {A(2, 2), A(2, 3), A(3, 3), A(6, 6)};
    A z1(3, 3);

    cout << "x[],y1 index=" << find(x, y1, 4) << endl;
    cout << "y[],x1 index=" << find(y, x1, 4) << endl;

    cout << "x[],z1 index=" << find(x, z1, 4) << endl;
    cout << "z[],x1 index=" << find(z, x1, 4) << endl;

    cout << "y[],z1 index=" << find(y, z1, 4) << endl;
    cout << "z[],y1 index=" << find(z, y1, 4) << endl;

    cout << "z[],z1 index=" << find(z, z1, 4) << endl;
    return 0;
}