#include <iostream>

using namespace std;

class MyUnary {
    public:
        void operator ! () {
            cout << "!!!" << endl;
        }
        friend void operator & (MyUnary m) {
            cout << "&&&" << endl;
        }
        void operator ~ () {
            cout << "~~~" << endl;
        }
        friend void operator * (MyUnary m) {
            cout << "***" << endl;
        }
        void operator + () {
            cout << "+++" << endl;
        }
        friend void operator - (MyUnary m) {
            cout << "---" << endl;
        }
};

int main() {
    MyUnary m;
    !m;
    &m;
    ~m;
    *m;
    +m;
    -m;
    return 0;
}