#include <iostream>

using namespace std;
class Box {
    int width;
    int height;
    int length;
public:
    Box() {
        set(0, 0, 0);
    }
    Box(int x) {
        set(x, 0, 0);
    }
    Box(int x, int y) {
        set(x, y, 0);
    }
    Box(int x, int y, int z) {
        set(x, y, z);
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
    void addWidth(Box);
};

void Box::addWidth(Box b) {
    int total;
    total = width + b.width;
    cout << "total=" << total << endl;
}

void Box::show() {
    cout << "Width = " << width << endl;
    cout << "Height = " << height << endl;
    cout << "Length = " << length << endl;
    cout << endl;
}

int main() {
    Box aBox;
    Box bBox(2);
    Box cBox(3, 4);
    Box dBox(5, 6, 7);
    dBox.addWidth(cBox);

    return 0;
}