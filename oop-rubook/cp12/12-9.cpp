#include <iostream>
#include <exception>
using namespace std;
class MyException: public exception {
    virtual const char* what() const throw() {
        return "Hello my exception";
    }
};

int main() {
    MyException ex;
    try {
        cout << "My World" << endl;
        throw ex;
    }
    catch (exception& e) {
        cout << e.what() << endl;
    }
    cout << "Hello World" << endl;
    return 0;
}