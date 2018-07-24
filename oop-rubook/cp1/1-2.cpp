#include <stdio.h>

void init(Stack *s);
void push(Stack *s, int i);
int pop(Stack *s);

typedef struct {
    int items[10];
    int top;
} Stack;

void init(Stack *s) {
    s->top = 0;
}

void push(Stack *s, int i) {
    s->items[s->top++] = i;
}

int pop(Stack *s) {
    return s->items[--s->top];
}

int main() {
    int y;
    Stack myStack;
    init(&myStack);
    push(&myStack, 1);
    push(&myStack, 2);
    y = pop(&myStack);

    return 0;
}