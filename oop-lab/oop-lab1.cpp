#include <iostream>
#include <string.h>

using namespace std;

class Point {
private:
	double x;
	double y;
	char name[20];

public:
	void setX(double x) {
		this->x = x;
	}
    void setY(double y) {
        this->y = y;
    }
    void setName(char *name) {
        strcpy(this->name, name);
    }
    void set(double x, double y, char *name) {
        this->x = x;
        this->y = y;
        strcpy(this->name, name);
    }

	double getX() {
		return x;
	}
	double getY() {
		return y;
	}
	char *getName() {		// Function Pointer
		return name;
	}

	void show();
};

void Point::show() {
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "name = " << name << endl;
    cout << endl;
}

int main() {
	Point p1, p2;

	p1.setX(2.2); p1.setY(4.4); p1.setName("P1");
    cout << p1.getX() << " : " << p1.getY() << " : " << p1.getName() << endl;

	p2.set(3.4, 4.2, "P2");	
	cout << p2.getX() << " : " << p2.getY() << " : " << p2.getName() << endl;
    cout << endl;

	p1.show();
	p2.show();

	return 0;
}