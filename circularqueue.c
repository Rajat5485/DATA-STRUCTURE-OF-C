// implementation of circular queue
#include<stdio.h>
# define size 3
int cq[size];
int rear=-1;
int front=-1;
void insert (int x)
{
    if((rear+1)%size==front)
    {
    printf("over flow condition");
    }
    else if(rear==-1 && front==-1)
    {
        rear=front=0;
        cq[rear]=x;
    }
    else
    {
        rear = (rear+1)%size;
        cq[rear]=x;
    }
    
    printf("The data of queue is %d \n \n",x);
    }
    void delete()
    {
        
        if(rear==-1 && front==-1)
        {
            printf("under flow condition");
            return;
        }
         int x;
         x=cq[front];
         if (rear==front)
        {
            rear=front=-1;
        }
        else
        {
            front=(front+1)%size;
        }
        printf("The deleted element is %d \n ",x);
    }
    int main()
    {
        for(int i=0;i<size;i++)
        {
        printf("Enter the %d data for insertion in circular queue:",i+1);
        int x;
        scanf("%d",&x);
        insert(x);
        }
        for(int i=front;i<=rear;i++)
        {
        delete();
        }
        return 0 ;
    }
    