#include<stdio.h>
# define size 5
int stack[size];
int top=-1;
void push()
{
    if(top==size-1)
    {
        printf("overflow condition \n");
    }
    else
    { 
        for(int i=top;i<size;i++)
        {
        top++;
        int n;
        printf("enter the element in stack \n");
        scanf("%d",&n);
        stack[top]=n;
        }
    }
    
}
void display()
for(int i=top;i<size;i++)
        {

    printf("display the element in stack \n");
    printf("%d",&stack[top]);
}
void pop()
for(int i=top;i<size;i++)
        {
    if(top==-1)
    {
        printf("stack is empty:\n ");
    }
    else
    {
        int r;
        r=stack[top];
        printf("the poped element is %d" ,r);

    }
}
int main()
{
    printf("the push function is called");
    push();
    printf("the display function is called ");
    display();
    printf("the pop function is called");
    pop();


}