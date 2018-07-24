#include <iostream>
#include <string.h>

using namespace std;

class A {
    int a;
    public:
        void setA(int i) {
            a = i;
        }
        int getA() {
            return a;
        }
};

template <class T>
class B: public A {
    T b;
    public:
        void setB(int j, T k) {
            b = k; setA(j);
        }
        void showB() {
            cout << getA() << endl;
            cout << b << endl;
        }
};

class Employee {
    char name[80];
    public:
        Employee() {
            set("");
        }
        Employee(char *n) {
            set(n);
        }
        void set(char *n) {
            strcpy(name, n);
        }
        friend ostream& operator << (ostream& os, Employee& e);
};

ostream& operator << (ostream& os, Employee& e) {
    os << e.name;
    return os;
}

int main() {
    B<double> y;
    y.setB(2, 8.8);
    y.showB();

    B<Employee> e;
    e.setB(3, Employee("Somkid"));
    e.showB();
    e.setA(5);
    e.showB();
    return 0;
}