#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Stack {
    int data[MAX];
    int top;
} Stack;

void init(Stack* st) {
    st->top = -1;
}

int isEmpty(Stack* st) {
    return st->top == -1;
}

int isFull(Stack* st) {
    return st->top == MAX - 1;
}

void push(Stack* st, int value) {
    if (!isFull(st)) {
        st->data[++(st->top)] = value;
    }
}

void pop(Stack* st) {
    if (!isEmpty(st)) {
        st->top--;
    }
}

int top(Stack* st) {
    if (!isEmpty(st)) {
        return st->data[st->top];
    }
    return -1;
}

void show(Stack* st) {
    if (isEmpty(st)) {
        printf("EMPTY\n");
    } else {
        for (int i = 0; i <= st->top; i++) {
            printf("%d ", st->data[i]);
        }
        printf("\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    Stack st;
    init(&st);
    
    for (int i = 0; i < t; i++) {
        char command[10];
        scanf("%s", command);
        
        if (strcmp(command, "show") == 0) {
            show(&st);
        } else if (strcmp(command, "push") == 0) {
            int value;
            scanf("%d", &value);
            push(&st, value);
        } else if (strcmp(command, "pop") == 0) {
            pop(&st);
        }
    }

    return 0;
}

