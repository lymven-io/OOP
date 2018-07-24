#include <iostream>

using namespace std;

int y;
int& g(){
    static int x;
    x++;
    return x;
}

int& h() {
    y++;
    return y;
}

int main() {

    g() = 5;
    cout << g() << endl;

    h() = 8;
    cout << h() << endl;
    return 0;
}