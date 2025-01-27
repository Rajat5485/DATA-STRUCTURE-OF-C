#include<stdio.h>
# define size 5
int stack[size];
 int top==-1;
void push()
{
    if(top==size-1)
    {
        printf("overflow condition ");
    }
    else
    {
        top++;
        int n;
        printf("enter the number for insert in stack");
        scanf("%d",&n);
        stack[top]=n;
    }
    void display()
    {
        printf("display the element in stack");
        printf("%d",stack[top]);
    }
}
int main()
{
    push(int n);
   display();
}
