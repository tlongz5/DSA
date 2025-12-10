#include <stdio.h>
#include <string.h>

#define MAX 100

struct Stack {
    char data[MAX];
    int cnt;
};
typedef struct Stack st;

void ktao(st *st) {
    st->cnt = 0;
}

int is_empty(st *st) {
    return st->cnt == 0;
}

int is_full(st *st) {
    return st->cnt == MAX;
}

void push(st *st, char value) {
    if (!is_full(st)) st->data[(st->cnt)++] = value;
}

void pop(st *st) {
    if (!is_empty(st)) st->cnt--;
}

char top(st *st) {
    if (!is_empty(st)) return st->data[st->cnt - 1];
    return '\0';
}

int check(st *st, char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        char x = s[i];
        if (x == '[' || x == '{' || x == '(') {
            push(st, x);
        } else if (x == ']' || x == '}' || x == ')') {
            if (is_empty(st)) return 0;
            char top_char = top(st);
            if ((x == ']' && top_char == '[') ||
                (x == '}' && top_char == '{') ||
                (x == ')' && top_char == '(')) {
                pop(st);
            } else {
                return 0;
            }
        }
    }
    return is_empty(st);
}

int main() {
    st stack;
    ktao(&stack);
    
    char s[10000];
    scanf("%s", s);
    
    if (check(&stack, s)) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}

