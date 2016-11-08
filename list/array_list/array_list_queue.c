#include <stdio.h>
#include <stdlib.h>

const int INITIAL_SIZE = 20;
const int STEP = 30;
int count = 0;
int size = INITIAL_SIZE;
int queue[INITIAL_SIZE];

void push(int v) {
    if (count >= size) {
        printf("\tresizing, %d, %d\n", count, size);
        // re-alloc memory
        size = count+STEP;
        int *temp = malloc(size * sizeof(int));
        for (int i = 0; i < count; i++) {
            temp[i] = queue[i];
        }
    }
    queue[count] = v;
    count ++;
};

int pop() {
    if(count<=0) {
        return -1;
    }
    return queue[count--];
};

int top() {
    return queue[count];
};

int main(void) {
    for(int i = 0; i < 80; i++) {
        push(i%7);
    }

    for(int i = 79; i >= 0; i--) {
        printf("pop: %d\n", pop());
    }
}