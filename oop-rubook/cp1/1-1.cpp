#include <stdio.h>

int main() {
    int stackData[10];
    int top = 0;
    int x, y;

    x = 1;
    stackData[top++] = x; // push
    x = 2;
    stackData[top++] = x;
    y = stackData[--top]; // pop

    return 0;
}