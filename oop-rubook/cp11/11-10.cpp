#include <iostream>
#include <string.h>

using namespace std;

class Employee
{
    char name[80];

  public:
    Employee()
    {
        set("");
    }
    Employee(char *n)
    {
        set(n);
    }
    void set(char *n)
    {
        strcpy(name, n);
    }
    friend ostream& operator<<(ostream &os, Employee &e);
};

ostream& operator << (ostream &os, Employee &e)
{
    os << e.name;
    return os;
}

template <class T>
class A
{
    T a;

  public:
    void setA(T i)
    {
        a = i;
    }
    T& getA()
    {
        return a;
    }
};

template <class S, class R>
class B : public A<S>
{
    R b;

  public:
    void setB(S j, R k)
    {
        b = k;
        setA(j);
    }
    void showB()
    {
        cout << A<S>::getA() << endl;
        cout << b << endl;
    }
};

int main()
{
    B<int, char*> y;
    y.setB(3, "hello");
    y.showB();
    y.setA(5);
    y.showB();

    cout << "---------" << endl;

    B<Employee, Employee> e;
    e.setB(Employee("Somkid"), Employee("Malee"));
    e.showB();
    e.setA(Employee("Bird"));
    e.showB();
    return 0;
}