#include <iostream>

using namespace std;

class Employee {
    char name[80];
    public:
        friend istream& operator >> (istream& is, Employee& e);
        friend ostream& operator << (ostream& os, Employee& e);
};

istream& operator >> (istream& is, Employee& e) {
    cout << "Enter name:"; is >> e.name;
    return is;
}

ostream& operator << (ostream& os, Employee& e) {
    os << e.name;
    return os;
}

//-------------------------------
// Link List (class templete)
//-------------------------------
template<class T>
class Node {
    T data;
    Node *next;
    public:
        Node() {
            next = 0;
        }
        void set(T value, Node *f) {
            data = value;
            next = f;
        }
        T &getData() {
            return data;
        }
        Node* getNext() {
            return next;
        }
};

template<class T>
class Linklist {
    Node<T> *first;
    public:
        Linklist() {
            first = 0;
        }
        ~Linklist();
        void add(T value);
        void print(ostream &os);
};

template<class T>
Linklist<T>::~Linklist() {
    Node<T> *temp;
    for (Node<T> *p = first; p;) {
        temp = p;
        p = p->getNext();
        delete temp;
    }
}

template<class T>
void Linklist<T>::add(T value) {
    Node<T> *n = new Node<T>;
    n->set(value, first);
    first = n;
}

template<class T>
void Linklist<T>::print(ostream &os) {
    for (Node<T> *p = first; p; p = p->getNext())
    os << p->getData() << endl;
}

template<class T>
ostream& operator << (ostream& os, Linklist<T> &r) {
    r.print(os);
    return os;
}

int main() {
    Linklist<double> myDouble;
    myDouble.add(1.2);
    myDouble.add(2.3);
    myDouble.add(3.4);
    cout << myDouble;

    Linklist<Employee> myEmp;
    Employee emp;
    for (int i = 0; i < 3; i++) {
        cin >> emp;
        myEmp.add(emp);
    }
    cout << myEmp;
    return 0;
}