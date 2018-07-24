#include <iostream>

using namespace std;

int main() {
    try {
        try {
            char* s = "hello";
            throw s;
            cout << s << endl;
        }
        catch (char *s) {
            throw;
        }
    }
    catch (double d) {
        cout << "Exception: " << d << endl;
    }
    catch (char *s) {
        cout << "Exception: " << s << endl;
    }
    catch (...) {
        throw;
    }
    cout << "Hello World" << endl;
    return 0;
}