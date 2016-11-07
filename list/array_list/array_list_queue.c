#include <stdio.h>

const int INITIAL_SIZE = 20;
const int STEP = 30;
int count = 0;
int size = INITIAL_SIZE;
int queue[INITIAL_SIZE];

void push(int v) {
    if (count >= size) {
        // re-alloc memory
        size = count+STEP;
        int *temp = malloc( size * sizeof int);
        for (int i = 0; i < count; i++) {
            temp[i] = queue[i];
        }
    }
    queue[count] = v;
    count ++;
};

int pop() {
    return queue[count--];
};

int top() {
    return queue[count];
};

int main(void) {
    // 
}