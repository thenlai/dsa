#include <stdio.h>
#include <stdlib.h>

const int INITIAL_SIZE = 20;
const int STEP = 30;

struct List {
    int* queue;
    int size;
    int count;
};

void push(struct List* l, int v) {
    if (l->count >= l->size) {
        printf("\tresizing, %d, %d\n", l->count, l->size);
        // re-alloc memory
        l->size = l->count + STEP;
        l->queue = realloc(l->queue, l->size * sizeof(int));
    }

    *(l->queue + l->count) = v;
    l->count++;
};

int pop(struct List* l) {
    if(l->count <= 0) {
        return -1;
    }
    l->count--;
    int temp = *(l->queue + l->count);
    return temp;
};

int top(struct List* l) {
    return *(l->queue + l->count);
};

int main(void) {
    struct List l;
    l.queue = malloc(INITIAL_SIZE * sizeof(int));
    l.size = INITIAL_SIZE;
    l.count = 0;

    for(int i = 0; i < 80; i++) {
        push(&l, i%7);
    }
    printf("count: %d\n", l.count);

    for(int i = 79; i >= 0; i--) {
        printf("pop: f(i: %d) =  %d\n", i, pop(&l));
    }
}