#include <iostream>

using namespace std;

class MyObj {
    int width;
    int height;
    float price;
    public:
        MyObj() {
            set(0, 0, 0);
        }
        MyObj(int w, int h, float p) {
            set(w, h, p);
        }
        void set(int w, int h, float p) {
            width = w;
            height = h;
            price = p;
        }
        void show() {
            cout << width << " " << height << " " << price << endl;
        }
        ~MyObj() {
            cout << "bye bye\n";
        }
};

int main() {
    MyObj *y[3] = { new MyObj,
                    new MyObj(2, 3, 100.5),
                    new MyObj(5, 6, 750.0)};
    for (int i = 0; i < 3; i++) 
        y[i]->show();
    for (int i = 0; i < 3; i++) 
        delete y[i];
}