/*#include <stdio.h>
#define size 5

int queue[size];
int rear = -1;
int front = -1;

void enqueue(int x) {
    if (rear == size - 1) {
        printf("Overflow condition\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
    printf("The element is %d \n", queue[rear]);
}

void dequeue() {
    int c;
    if (front == -1 && rear == -1) {
        printf("Underflow condition\n");
    } else {
        c = queue[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        printf("The deleted element is %d\n", c);
    }
}

int main() {
    printf(".......The Elements in queue......\n");
    for (int i = 0; i < size; i++) {
        int x;
        printf("Enter the element %d :\n", i + 1);
        scanf("%d", &x);
        enqueue(x);
    }

    printf("\n........The Dequeued elements are......\n");
    while (front != -1) {
        dequeue();
    }
    return 0;
*/
#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int x)
{
    if(top==size-1)
    {
        printf("over flow condition");
    }
    else{
        if(top==-1)
        {
            top=0;
            stack[top]=x;
        }
        else
        {
           top++;
           stack[top]=x;
        }
    }
    printf("The pushed element in stack is %d",stack[top]);
}
void pop()
{
    int c;
    if(top==size-1)
    {
        printf("under flow condition");
    }
    else{
        c=stack[top];
        if(top==0)
        {
            top==-1;
        }
        else
        {
            top--;
        }
    }
    printf("The poped element in stack is %d",c);
}
int main()
{
    printf("......Enter the data in  Stack......");
    for(int i=0;i<size;i++)
    {
     printf("Enter the  %d element in stack",i+1);
    int x;
    scanf("%d",&x);
    push(x);
    }
    while(top>=0)
    {
        pop();
    }
}