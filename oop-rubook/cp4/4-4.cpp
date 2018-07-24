#include <iostream>

using namespace std;

class MyObj
{
    int width;
    int height;
    float price;
    public:
        MyObj() {
            width = height = 0;
            price = 0;
        }
        void setA(int w, int h) {
            ++w;
            ++h;
            width = w;
            height = h;
        }
        void setB(int *a, int *b) {
            ++*a;
            ++*b;
            width = *a;
            height = *b;
        }
        void setC(int &c, int &d) {
            ++c;
            ++d;
            width = c;
            height = d;
        }
        void show() {
            cout << "width = " << width << " height=" << height << endl;
        }
};

int main() {
    MyObj k;
    int m, n;
    m = 3; n = 4;

    k.setA(m ,n);
    k.show();
    cout << "m=" << m << " n=" << n << endl;

    k.setB(&m, &n);
    k.show();
    cout << "m=" << m << " n=" << n << endl;
    
    k.setC(m, n);
    k.show();
    cout << "m=" << m << " n=" << n << endl;    

    return 0;
}