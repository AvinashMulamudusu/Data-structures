#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int item) {
    if (top >= MAX_SIZE-1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
    printf("%d pushed to stack\n", item);
}

int pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int peek() {
    if (top < 0) {
        printf("Stack is Empty\n");
        return -1;
    }
    return stack[top];
}

int main() {
    push(1);
    push(2);
    push(3);
    printf("%d popped from stack\n", pop());
    printf("Top element is %d\n", peek());
    return 0;
}

