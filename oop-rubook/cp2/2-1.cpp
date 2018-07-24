#include <iostream>

using namespace std;

class Box {
private:
    int width;
    int height;
    int length;

public:
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

void main() {
    Box myBox, yourBox;

    myBox.set(4, 5, 6);
    yourBox.set(8, 6, 10);

    myBox.show();
    yourBox.show();

    int volume;
    volume = myBox.getWidth() * myBox.getHeight() * myBox.getLength();
    cout << "myBox volume = " << volume << endl;
}