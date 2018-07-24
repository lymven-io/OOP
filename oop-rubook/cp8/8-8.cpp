#include <iostream>
#include <string.h>

using namespace std;

class MyString {
    char s[80];
    public:
        MyString() {
            strcpy(s,"");
        }
        MyString(char *x) {
            strcpy(s, x);
        }
        bool operator < (MyString);
        bool operator == (MyString);
        void show() {
            cout << s << endl;
        }
};
bool MyString::operator < (MyString m) {
    return (strlen(s) < strlen(m.s)) ? true : false;
}
bool MyString::operator == (MyString m) {
    return (strcmp(s, m.s) == 0) ? true : false;
}

int main() {
    MyString x("INT2103"), y("COS2102");
    x.show();
    y.show();

    if (x == y)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    if (x < y)
        cout << "x < y" << endl;
    else
        cout << "x >= y" << endl;
    return 0;
}