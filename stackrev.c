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
    printf("\n The pushed element in stack is %d",stack[top]);
}
void pop()
{
    int c;
    if(top==-1)
    {
        printf("under flow condition");
    }
    else{
        c=stack[top];
        top--;
    }
    printf("The poped element in stack is %d",c);
}
int main()
{
    printf("......Enter the data in  Stack......\n");
    for(int i=0;i<size;i++)
    {
     printf("Enter the  %d element in stack",i+1);
    int x;
    scanf("%d",&x);
    push(x);
    }
    /*while(1)
    {
        printf("do you want to pop: yes---->1\nNO---->2\n");
        int ans;
        scanf("%d",&ans); 
        if(ans==1){
            pop();
        }
        else{
            break;
        }
    }
    */
    
    for(int i=top;i>-1;i--)
    {
        pop();
    }
}