#include <iostream>

// Base class
class Shape {
public:
    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }
protected:
    int width;
    int height;
};

// Derive Class
class Rectangle : public Shape{
public:
    int getArea() {
        return (width * height);
    }
};

int main() {

    Rectangle Rect;
    // Set value
    Rect.setHeight(10);
    Rect.setWidth(7);

    std::cout << "Area : " << Rect.getArea() << std::endl;
    
    return 0;
}