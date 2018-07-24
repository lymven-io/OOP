#include <iostream>

using namespace std;
const int MAX = 80;

template <class T>
class Stack {
    T s[MAX];
    int top;
    public:
        Stack() {
            top = -1;
        }
        void push(T data) {
            s[++top] = data;
        }
        T pop() {
            return s[top--];
        }
};

int main() {

    Stack<int> s1;

    for (int i = 0; i < 3; i++)
        s1.push(i);
    for (int i = 0; i < 3; i++)
        cout << s1.pop() << endl;
    
    Stack<double> s2;

    for (int i = 0; i < 3; i++)
        s2.push(i * 2.0);
    for (int i = 0; i < 3; i++)
        cout << s2.pop() << endl;
    return 0;
}