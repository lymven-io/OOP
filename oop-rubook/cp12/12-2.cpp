#include <iostream>

using namespace std;

int main() {
    try {
        char* s = "hello";
        throw s;
        cout << s << endl;
    }
    catch (double d) {
        cout << "Exception: " << d << endl;
    }
    catch (int i) {
        cout << "Exception: " << i << endl;
    }
    catch (char c) {
        cout << "Exception: " << c << endl;
    }
    catch (...) {
        cout << "Other exceptions" << endl;
    }
    cout << "Hello World" << endl;
    return 0;
}