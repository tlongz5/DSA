#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define MAX 100


struct Stack{
	int data[MAX];
	int cnt;
};
typedef struct Stack st;

void ktao(st *st){
	st->cnt = 0;
}

int is_empty(st *st){
	return st->cnt == -1;
}

int is_full(st *st){
	return st->cnt == MAX - 1;
}

void push(st *st){
	int value;scanf("%d",&value);
	if(!is_full(st)) st->data[(st->cnt)++] = value;
}

void pop(st *st){
	if(!is_empty(st)){
		st->cnt--;
	}
}

int top(st *st){
	if(!is_empty(st)) return st->data[st->cnt-1];
	return -1;
}

int main(){
	st st;
	ktao(&st);
	
	int n;scanf("%d",&n);
	while(n--){
		char s[10];
		scanf("%s",s);
		
		if(!strcmp(s,"push")){
			push(&st);
		}
		else if(!strcmp(s,"top")){
			printf("%d\n",top(&st));
		}
		else {
			pop(&st);
		}
	}
}








