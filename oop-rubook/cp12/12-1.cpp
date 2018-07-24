#include <iostream>

using namespace std;

int main() {
    try {
        throw 5;
    }
    catch (int e) {
        cout << "Exception: " << e << endl;
    }
    cout << "Hello World" << endl;
    return 0;
}