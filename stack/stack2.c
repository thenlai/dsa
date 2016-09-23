#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


typedef struct Node {
	int data;
	struct Node *pNext;
} Node, *pNext;

typedef struct Stack {
	Node *top;
	Node *bottom;
} Stack, *pStack;

void init(Stack *ps) {
	ps->bottom = malloc(sizeof(Node));
	ps->top = ps->bottom;
	ps->top->pNext = NULL;
}

void traverse(Stack *ps) {
	if(ps->bottom==ps->top) {
		printf("empty stack\n");
		return;
	}

	Node *pn = ps->top;
	while(pn!=ps->bottom) {
		printf("%d ", pn->data);
		pn=pn->pNext;
	}

	printf("\n");
	return;
}

void push(Stack *ps, int val) {
	Node *pn = malloc(sizeof(Node));
	pn->data = val;
	pn->pNext = ps->top;
	ps->top = pn;
}

void pop(Stack *ps) {
	if(ps->top==ps->bottom) {
		printf("empty stack\n");
		return;
	}

	Node *tmp = ps->top;
	ps->top = ps->top->pNext;
	free(tmp);
	tmp=NULL;
}

void clear(Stack *ps) {
	while(ps->top != ps->bottom) {
		Node *tmp = ps->top;
		ps->top = ps->top->pNext;
		free(tmp);
	}
}

int main(void) {
	Stack stack;
	init(&stack);
	push(&stack, 6);
	push(&stack, 7);
	push(&stack, 8);
	//push(&stack, 9);
	traverse(&stack);
	pop(&stack);
	clear(&stack);
	traverse(&stack);
	push(&stack, 7);
	traverse(&stack);
	return 0;
}