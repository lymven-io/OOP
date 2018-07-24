#include <iostream>

using namespace std;

class Box {
    int width;
    int height;
    int length;
    public:
        Box(int x = 0, int y = 0, int z = 0) : width(x), height(y), length(z) {}
        void show(void);
};

void Box::show() {
    cout << "Width = " << width << endl;
    cout << "Height = " << height << endl;
    cout << "Length = " << length << endl;
    cout << endl;
}

int main() {
    Box aBox;
    aBox.show();
    Box bBox(2);
    bBox.show();
    Box cBox(3, 4);
    cBox.show();
    Box dBox(5, 6, 7);
    dBox.show();
}