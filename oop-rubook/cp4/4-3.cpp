#include <iostream>

using namespace std;

void f(int a) {
    cout << a << endl;
}

int main() {
    int i = 5;
    f(10);
    f(i);

    return 0;
}