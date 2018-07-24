#include <iostream>

using namespace std;

class MyObj {
    int width;
    int height;
    float price;
    public:
        MyObj(int i, int j, float k) {
            width = i;
            height = j;
            price = k;
        }
        ~MyObj() {
            cout << "bye bye\n";
        }
        float addPriceV(MyObj x) {
            x.price+=10;
            return (price+x.price);
        }
        float addPriceR(MyObj &x) {
            x.price+=10;
            return (price+x.price);
        }
        void showPrice() {
            cout << price << endl;
        }
};

int main() {
    MyObj m(5, 10, 20.0);
    MyObj n(15, 20, 30.0);

    cout << m.addPriceV(n) << endl;
    n.showPrice();
    cout << endl;
    cout << n.addPriceR(n) << endl;
    n.showPrice();
    cout << endl;
}