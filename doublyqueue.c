
/*#include<stdio.h>
#define size 5
int rear=-1;
int front=-1;
int dqueue[size];
void enqueuerear(int x)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    {
    printf("Over flow condition ");
    return ;
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        dqueue[rear]=x;
    }
    else if(rear==size-1)
    {
        rear=0;
        dqueue[rear]=x;
    }
    else
    {
        rear++;
        dqueue[rear]=x;
    }
    printf("The enqueued element by rear is %d",dqueue[rear]);
}
void enqueuefront(int x)
{
    if((front==0&&rear==size-1)||(front==rear+1))
    {
    printf("Over flow condition ");
    return ;
    }
    else if(front==-1&&rear==-1)
    {
        front=rear=0;
        dqueue[front]=x;
    }
    else if(front==0)
    {
        front=size-1;
        dqueue[front]=x;
    }
    else

    {
        front--;
        dqueue[front]=x;
    }
    printf("The enqueued element by front is %d \n",dqueue[front]);
}
void dequeuerear()
{
    int c;

    if(front==-1&&rear==-1)
    {
    printf("Under flow condition ");
    return ;
    }
    c=dqueue[rear];
    if(front==0&&rear==0)
    {
        front=rear=-1;
        
    }
    else if(rear==0)
    {
        rear=size-1;
        
    }
    else
    {
        rear--;
    }
    printf("The dequeued element by rear is %d\n",c);
}
void dequeuefront()
{
    int c;
    if(front==-1||rear==-1)
    {
    printf("Under flow condition ");
    return ;
    }
    c=dqueue[front];
    if(front==0&&rear==0)
    {
        front=rear=-1;
        
    }
    else if(front==size-1)
    {
        front=0;
        
    }
    else
    {
        front++;
    }
    printf("The dequeued element by front is %d",c);
}
int main()
{
    printf("--------->EnTer tHe DaTa<----------\n ");
    while(1)
    {
        printf("\nDo you want to enqueue by rear and front and dequeue by front and rear and break:\n rear---->1\nfront----->2\n dfront----->3\ndrear----->4\n break---->5\n ");
         int ans;
        scanf("%d",&ans);
        if(ans==1)
        {
            int x;
            printf("ENter the data ");
            scanf("%d",&x);
            enqueuerear(x);
        }
        else if(ans==2)
        {
             int x;
            printf("ENter the data ");
            scanf("%d",&x);
            enqueuefront(x);
        }
        else if(ans==3)
        {
            dequeuefront();
        }
        else if(ans==4)
        {
            dequeuerear();
        }
        else{
            break;
        }
    }
}

#include<stdio.h>
#define size 10
int cq[size];
int rear=-1;
int front=-1;

void insert(int x) {
    if (((rear+1)%size) == front) {
        printf("Overflow condition");
    }
    else if (rear == -1 && front == -1) {
        rear = front = 0;
        cq[rear] = x;
    }
    else {
        rear = (rear+1)%size;
        cq[rear] = x;
    }
    printf("The inserted element is %d", cq[rear]);
}

void delete() {
    if (front == -1 && rear == -1) {
        printf("Underflow condition");
    }
    else {
        int c = cq[front];
        if (front == rear) {
            rear = front = -1;
        }
        else {
            front = (front+1)%size;
        }
        printf("The deleted element is %d", c);
    }
}

int main() {
    printf("------->Enter the data in circular queue<--------\n");
    while(1) {
        printf("\n Do you want to insert data or delete data\n insert----->1\n delete----->2\n break----->3\n");
        int ans;
        scanf("%d", &ans);
        if (ans == 1) {
            int x;
            printf("Enter the data for insert in queue\n");
            scanf("%d", &x);
            insert(x);
        }
        else if (ans == 2) {
            delete();
        }
        else {
            break;
        }
    }
    return 0;
}*/

#include<stdio.h>
#include<conio.h>
struct priority{
    int pri;
    int ele;
}pq[5];
int rear=-1;
int empty()
{
    if(rear==-1)
    {
        printf("Queue is empty:\n");
        return 1;

    }
    else
    {
        printf("Queue is not empty:\n");
        return 0;
    }
}
int full()
{
    if(rear==4)
    {
        printf("Queue is full:\n");
        return 1;
    }
    else{
        printf("Queue is not full:");
        return 0;
    }
}
void insert(int data,int priority)
{
    if(rear==4)
    {
        printf("Queue is full:\n");
    
    }
    else
    {
    rear=rear+1;
    pq[rear].ele=data;
    pq[rear].pri=priority;
    }

}
int  greatest()
{
    int p=-1;
    for(int i=0;i<=rear;i++)
    {
        if(pq[i].pri>p)
        {
            p=pq[i].pri;
        }
        
    }
   printf("The  highest priority is %d",p);
}
int delete()
{
    if (rear == -1)
     {
        printf("Queue is empty\n");
        return -1; 
    }
    int p;
    p=greatest();
    int element;
    for(int i=0;i<rear;i++)
    {
        if(pq[i].pri==p)
        {
            
            element=pq[i].ele;
            break;
        }
        for(int j=i;j<rear;j++)
        {
            pq[j].ele=pq[j+1].ele;
            pq[j].pri=pq[j+1].pri;
        }
        rear--;
        
    }return element;
    
    }

   int main()
   {
    while(1)
    {

        printf("\nWhat you want to do \nEmpty---->1\nFull---->2\nInsert---->3\nGreatest---->4\nDelete---->5\nBreak---->\n");
        int ans;
        scanf("%d",&ans);
        if(ans==1)
        {
            empty();
        }
        else if (ans==2)
        {
            full();
        }
        else if(ans==3)
        {
            int data;
           printf("Enter the data ");
           scanf("%d",&data);
           int priority;
            printf("Enter the priority ");
            scanf("%d",&priority);
            insert(data,priority);
        }
        else if(ans==4)
        {
            greatest();
        }
        else if (ans==5)
        {
            delete();
        }
        else 
        {
            break;
        }
    }
 } 

