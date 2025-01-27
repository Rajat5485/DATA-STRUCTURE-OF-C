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
     //   printf("Element %d pushed to stack\n", x);
    }
}
void display()

{
    if(top==-1)
    {
        printf("stack is empty");
    }
       else {
        printf("The %d element of stack is %d\n", top + 1, stack[top]);
    }
    }

void pop() {
    if(top == -1) {
        printf("Underflow condition\n");
    }
    else {
        printf("The %d popped element is %d\n",top+1, stack[top]);
        top--;
    }
     }


int main() {
    for(int i = 0; i < size; i++)
     {
        printf("Enter the data %d: ", i);
        int n;
        scanf("%d", &n);
        push(n);
    }
    printf("display the elements");
     for(int i = 0; i < top; i++) 
     {
        display();
     }
    
    for(int i = top; i >= 0; i--)
    {
        pop();
    }
     
    return 0;
}
