#include <iostream>

using namespace std;

class MyObj{
    private:
        static int num;
        int width;
        int height;
        float price;
    public:
        MyObj() {
            num++;
            set(0, 0, 0.0);
            cout << num << endl;
        }
        MyObj(int w, int h) {
            num++;
            set(w, h, 0.0);
            cout << num << endl;
        }
        MyObj(float p) {
            num++;
            set(0, 0, p);
            cout << num << endl;
        }
        MyObj(int w, int h, float p) {
            num++;
            set(w, h, p);
            cout << num << endl;
        }
        ~MyObj() {
            num--;
            cout << num << endl;
        }
        void set(int w, int h, float p) {
            width = w;
            height = h;
            price = p;
        }
};

int MyObj::num;

int main() {
    MyObj book;
    {
        MyObj pencil(1, 14), table(3500, 0);
    }
    MyObj mobile(4, 10, 15000.0);
}