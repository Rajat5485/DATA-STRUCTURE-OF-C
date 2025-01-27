#include<stdio.h>

#define size 5
int stack[size];
int top = -1;

void push(int x) {
    if(top == size - 1) {
        printf("Overflow condition\n");
    }
    else {
        top++;
        stack[top] = x;
        printf("Element %d pushed to stack\n", x);
    }
}

int main() {
    for(int i = 0; i < size; i++) {
        printf("Enter the data %d: ", i);
        int n;
        scanf("%d", &n);
        push(n);
    }
    return 0;
}
