#include <iostream>

using namespace std;

class Box {
private:
    int width;
    int height;
    int length;
public:
    Box() {
        width = 0;
        height = 0;
        length = 0;
        cout << "My constructor" << endl;
    }

    void set(int w, int h, int l) {
        width = w;
        height = h;
        length = l;
    }
    int getWidth() {
        return width;
    }
    int getHeight() {
        return height;
    }
    int getLength() {
        return length;
    }
    void show(void);
};

void Box::show() {
    cout << "Width = " << width << endl;
    cout << "Height = " << height << endl;
    cout << "Length = " << length << endl;
    cout << endl;
}

main() {
    Box aBox;
    Box bBox, cBox;
}