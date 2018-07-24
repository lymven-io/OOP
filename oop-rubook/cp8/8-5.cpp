#include <iostream>

using namespace std;

class Retangle {
    double width, height;
    double area;
    public:
        Retangle() {
            width = height = area = 0.0;
        }
        Retangle(double d) {
            area = d;
            width = 1;
            height = d;
        }
        Retangle(double w, double h) {
            width = w;
            height = h;
            area = width * height;
        }
        Retangle operator++() {
            return Retangle(width + 1, height + 1);
        }
        operator double() {     // convert to double
            return area;
        }
        void show() {
            cout << "width=" << width << " height=" << height << endl;
            cout << "area=" << area << endl;
        }
};

int main() {
    Retangle r1(3.0, 4.0), r2(2.5, 3.5);
    double a, b, c;
    a = double(r1);                     // convert to double
    cout << "a=" << a << endl;
    b = r2;                             // convert to double
    cout << "b=" << b << endl;
    c = ++r1;                           // convert result of ++r1 to double
    cout << "c=" << c << endl;
    Retangle r3 = 4.5;                  // convert to Rectangle using 1-arg constructor
    r3.show();
    r3 = 2.0;                           // convert to Rectangle using 1-arg constructor
    r3.show();
    return 0;
}