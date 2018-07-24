#include <iostream>

class Box {
public :
    double length;
    double breadth;
    double heigth;
};

int main() {

    Box box1;
    Box box2;

    double volume = 0.0;

    box1.length = 5.0;
    box1.breadth = 4.0;
    box1.heigth = 3.0;

    box2.length = 8.0;
    box2.breadth = 9.0;
    box2.heigth = 12.0;

    std::cout << "Box1 Volume :" << box1.heigth * box1.breadth * box1.length << std::endl;
    std::cout << "Box2 Volume :" << box2.heigth * box2.breadth * box2.length << std::endl;

    std::cin.get();    
    return 0;
}