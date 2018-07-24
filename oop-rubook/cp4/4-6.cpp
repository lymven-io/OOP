#include <iostream>

using namespace std;

class MyObj {
    int width;
    int height;
    float price;
    public:
        MyObj() {
            width = height = 0;
            price = 0;
        }
        void set(const int &c, const int &d) {      //use keyword const
            width = c;
            height = d;
            // c = 1; d = 2;    // error
        }
        void show() {
            cout << "width = " << width << " height = " << height << endl;
        }
};

int main() {
    MyObj k;
    int m, n;
    m = 3;
    n = 4;

    k.set(m, n);
    k.show();

    k.set(5, 6);
    k.show();

    const int p = 7;
    const int q = 8;
    k.set(p, q);
    k.show();
    return 0;
}