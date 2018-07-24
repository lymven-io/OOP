#include <iostream>

using namespace std;

class Retangle {
    double width, height;
    double area;
    public:
        Retangle() {
            width = height = area = 0.0;
        }
        Retangle(double w, double h) {
            width = w;
            height = h;
            area = width * height;
        }
        double getMin() {
            return(width < height ? width : height);
        }
        void show() {
            cout << "Rectangle: " << width << " x " << height << " = " << area << endl;
        }
};

class Cube {
    double width;
    double volume;
    public:
        Cube() {
            width = volume = 0.0;
        }
        Cube(double w) {                        // convert to cube
            width = w;
            volume = w * w * w;
        }
        Cube(Retangle r) {                      // convert to Rectangle
            width = r.getMin();
            volume = width * width * width;
        }
        void show() {
            cout << "Cube: " << width << " x " << width << " x " << width << " = " << volume << endl; 
        }
};

int main() {
    Retangle r1(3.0, 4.0), r2;
    Cube c1(5.0), c2;
    r2 = c1;            // convert to Rectangle
    c2 = r1;            // convert to Cube
    r2.show();
    c2.show();
    return 0;
}