#include <stdio.h>
#include <stdlib.h>

typedef struct _tag_stack {
	int *a;
	int size;
	int top;
} IntStack;

IntStack* InitStack(int size) {
	IntStack *ret = NULL;
	ret = (IntStack*)malloc(sizeof(IntStack));
	ret->a = (int*)malloc(sizeof(int));
	ret->size = size;

	if(ret) {
		ret->top = 0;
	}
	return ret;
}

int push(IntStack *stack, int data) {
	if(stack->top >= stack->size) {
		int *pList = realloc(stack->a, (stack->top+1)*sizeof(int));
		if(!pList) {
			return 0;
		}
		stack->top++;
		stack->a = pList;

		printf("realloc: size = %d, top= %d, data = %d\n", 
			stack->size, stack->top, data);
		stack->a[stack->top] = data;
	} else {
		printf("size = %d, top= %d, data = %d\n", 
			stack->size, stack->top, data);

		stack->a[stack->top] = data;
		stack->top ++;
	}
	return 1;
}

int pop(IntStack *stack, int *data) {
	if(stack->top<=0) {
		printf("Stack is empty\n");
		return 0;
	} else {
		stack->top--;
		*data = stack->a[stack->top];
		return 1;
	}
}

int top(IntStack *stack) {
	return stack->a[stack->top];
}

int empty(IntStack *stack) {
	if(stack->top<0) return 0;
	return 1;
}

void print(IntStack *stack) {
	int i = 0;
	if(stack->top==0) {
		printf("It is empty\n");
	} else {
		for(;i<stack->top;i++) {
			printf("stack.at[%d] = %d\n", i, stack->a[i]);
		}
	}
}


int main(void) {
	IntStack* st;
	st = InitStack(4);

	int i = 0;
	for(; i<5; i++) {
		push(st, i);
	}
	print(st);

	int u = 0;
	pop(st, &u);
	printf("pop up element: %d\n", u);
	pop(st, &u);
	printf("pop up element: %d\n", u);
	pop(st, &u);
	printf("pop up element: %d\n", u);
	pop(st, &u);
	printf("pop up element: %d\n", u);
	pop(st, &u);
	printf("pop up element: %d\n", u);
	pop(st, &u);
	printf("%d\n", u);

	return 1;
}