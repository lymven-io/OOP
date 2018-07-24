#include <iostream>

const int MAX = 3;
using namespace std;
class MyArray {
    int array[MAX];
    public:
        MyArray();
        int &operator [] (int n) {
            if (n < 0 || n >= MAX) {
                cout << "The index number is out of bound\n";
                exit(1);
            }
            return array[n];
        }
};
MyArray::MyArray() {
    for (int i = 0; i < MAX; i++) {
        array[i] = 0;
    }
}

int main() {
    MyArray a, b;
    int i;
    for (i = 0; i < 3; i++) {
        a[i] = i * 2;
        cout << "a[" << i << "]=" << a[i] << endl;
    }
    for (i = 0; i < 4; i++) {
        b[i] = a[i] * 3;
        cout << "b[" << i << "]=" << b[i] << endl;
    }
    cout << "subscript operator" << endl;
    return 0;
}