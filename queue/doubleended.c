#include<stdio.h>
# define  size 5
int queue[size];
    int rear =-1;
    int front = -1;

    int empty()
    {
        if(front==-1 && rear==-1)
        return 1;
    else
        return 0;
    }
    int full()
    {
        if(front==-1 && rear==size-1)
        return 1;
    else
    return 0;
    }
     
     void enqueueFront(int x)
     {
        if(front==0 && rear==size-1)
        {
            printf("queue is full");
        }
        else if(front==-1 && rear==-1)
        {
            front=rear=0;
            queue[front]=x;
        }
        else if(front==0)
        {
            front=size-1;
            queue[front]=x;
        }
        else
        {
            front=front-1;
            queue[front]=x;

        }
     }
     void enqueueRear(int x)
     {
        if(front==0 && rear==size-1)
        {
            printf("queue is full");

        }
        else if(rear==-1 && front==-1)
        {
           rear=front=0;
           queue[rear]=x;
        }
        else if(rear==size-1)
        {
            rear=0;
            queue[rear]=x;

        }
        else
        {
            rear=rear+1;
            queue[rear]=x;

        }
     }
        int dequeueFront()
        {
            if(rear=-1 && front==-1)
            {
                printf("stack is empty");
                return -1;
            }
            else if(rear=front)
            {
                front=rear=-1;
            }
            else if (front==size-1)
            {
                
                front=rear =0;
            }
            else
            {
                front=front+1;
            }
            
                return queue[front];
        }
        int dequeueRear()
        {
            if(rear=-1 && front==-1)
            {
                printf("queue is empty");
            }
            else if(front =rear)
            {
                rear=front=-1;
            }
            else if(rear =0)
            {
                rear=size-1;
            }
            else{
                rear--;
            }
        }
     int main()
     {
        printf("enter the element in queue for front\n");
        for(int i=0;i<=size-1;i++)
        {
        int x;
        scanf("%d",&x);
        enqueueFront(x);
        }
        printf("enter the element in queue for rear\n");
       for(int i=0;i<=size-1;i++)
       {
        int x;
        scanf("%d",&x);
        enqueueRear(x);
         }
         for(int i=0;i<=size-1;i++)
          {
        int x;
        printf("the dequeue element");
        int element;
        element=dequeueFront();
          printf(" the element removed is %d",element);
     return 0;
     }
     }


     




