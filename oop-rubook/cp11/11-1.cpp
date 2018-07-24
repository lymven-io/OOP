#include <iostream>

using namespace std;
template <class T>
T square(T x) {
    return (x*x);
}

int main() {
    cout << square(2) << endl;
    cout << square(2.5) << endl;
    return 0;
}