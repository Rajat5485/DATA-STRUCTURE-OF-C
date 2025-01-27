/*#include<stdio.h>
# define size 5
int s1[size],s2[size];
int top1=-1,top2=-1;
int count=0;
void push1(int x)
{
    printf("Enter the element in stack \n ");
    if(top1==size-1)
    {
        printf("overflow condition");
    }
    else{
        top1++;
        s1[top1]=x;
        printf("The element is %d \n",s1[top1]);

    }
}
void push2(int x)
{
    printf("Enter the element in stack \n ");
    if(top2==size-1)
    {
        printf("overflow condition");
    }
    else{
        top2++;
        s2[top2]=x;
        printf("The element is %d \n",s2[top2]);

    }
}

void pop2()
{
    int m;
    m=s2[top2];
    if(top2==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        top2--;
    }
    printf("The deleted element is %d",m);
}
void pop1()
{
    int m;
    m=s1[top1];
    if(top1==-1)
    {
        printf("Stack is empty");
    }
    else
    {
       top1--;
    }
    printf("The deleted element is %d",m);
}
void enqueue(int x)
{
    push1(x);
    count++;

}
void dequeue()
{
    if(top1==-1 && top2==-1)
    {
        printf("queue empty");
    }
    else
    {
        for(int i=0; i<count; i++)
        {
            int a;
              a=pop1();
              push2(a);
        }
        int b;
        b=pop2();
        printf("%d",b);
        count--;
        for(int i=0;i<count;i++)
        {
            a=pop2();
            push1(a);
        }
    }
}
int main()
{
    int x;
    for(int=0;i<size;i++)
    {
    printf("Enter the data for insert in stack \n ");
    scanf("%d",&x)
    enqueue(x)
    for(int )
    dequeue();
    }


}*/
#include<stdio.h>
#define size 5
int s1[size],s2[size];
int top1=-1,top2=-1;
int count=0;
void push1(int x)
{
   
    if(top1==size-1)
    {
        printf("overflow condition");
    }
    else{
        top1++;
        s1[top1]=x;



    }printf("The element is %d \n",s1[top1]);
}
void push2(int x)
{
    //printf("Enter the element in stack \n ");
    if(top2==size-1)
    {
        printf("overflow condition");
    }
    else{
        top2++;
        s2[top2]=x;
        printf("The element is %d \n",s2[top2]);

    } printf("The element is %d \n",s2[top2]);
}

void pop2()
{
    int m;
    if(top2==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        m=s2[top2];
        top2--;
    }
    printf("The deleted element is %d",m);
}
void pop1()
{
    int m;
    if(top1==-1)
    {
        printf("Stack is empty");
    }
    else
    {
        m=s1[top1];
        top1--;
    }
    printf("The deleted element is %d",m);
}
void enqueue(int x)
{
    push1(x);
    count++;
}
void dequeue()
{
    if(top1==-1 && top2==-1)
    {
        printf("queue empty");
    }
    else
    {
        while(top1 != -1)
        {
            int a = s1[top1];
            top1--;
            push2(a);
        }
        int b = s2[top2];
        top2--;
        printf("%d", b);
        count--;
        while(top2 != -1)
        {
            int a = s2[top2];
            top2--;
            push1(a);
        }
    }
}
int main()
{
    int x;
    printf("Enter the data for enqueue in queue:\n");
    scanf("%d",&x);
    enqueue(x);
    dequeue();
    

}

