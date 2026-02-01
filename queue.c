#include <stdio.h>
#define SIZE 5

int q[SIZE], front = -1, rear = -1;

void insert(int x) {
    if(rear == SIZE-1) return;
    if(front == -1) front = 0;
    q[++rear] = x;
}

int main() {
    insert(10);
    insert(20);
    printf("%d", q[front]);
    return 0;
}
