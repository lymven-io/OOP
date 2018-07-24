#include <iostream>
#include <string.h>

using namespace std;

class MyName {
    char name[10];
    public:
        MyName() {
            strcpy(name, "noname");
            cout << "Hi: " << name << endl;
        }
        MyName(char *n) {
            strcpy(name, n);
            cout << "Hi: " << name << endl;
        }
        ~MyName() {
            cout << "bye bye: " << name << endl;
        }
};

int main() {
    MyName n1;
    MyName n2("Somchai");
    {
        MyName n3("Somkid");
    }
    MyName n4("Somrak");
}