#include <iostream>
#include <string.h>
using namespace std;

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

template <class T>
class A {
    T a;
    public:
        void setA(T i) {
            a = i;
        }
        T& getA() {
            return a;
        }
};

class B: public A<Employee> {
    int b;
    public:
        void setB(Employee j, int k) {
            b = k;
            setA(j);
        }
        void showB() {
            cout << getA() << endl;
            cout << b << endl;
        }
};

int main() {
    B y;
    Employee emp1;
    emp1.set("Somkid");

    y.setB(emp1, 4);
    y.showB();

    y.setA(Employee("Malee"));
    y.showB();
    return 0;
}