#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
int main()
{
    struct node *head;
    head= (struct node *)malloc(sizeof (struct node));
    head-> data=50;
    printf("enter the data of first node:");
    scanf("%d",&head->data);
    //printf("%d",head->data);
    head->next=NULL;
    int n;
    printf("enter the number of node:");
    scanf("%d",&n);
    struct node *temp;
    temp=head;
    struct node *newnode;
    for(int i=2;i<=n;i++)
    {
        newnode= (struct node *)malloc(sizeof (struct node));
        printf("enter the data of %d node:",i);
        scanf("%d",&newnode->data);
        //printf("%d",temp->data);
        temp->next= newnode;
        newnode->next =NULL;
        temp=temp->next;
    }
    temp=head;
    while(temp!= NULL)
    {
       // temp= temp -> newnode;
        printf("%d ",temp-> data);
        temp=temp->next;

    }
    printf("\n");
    printf("\n enter the data for insertion");
    struct node * first;
    first=(struct node *)malloc(sizeof (struct node));
    first->next=head;
    head=first;
    scanf("%d",&head->data);
    temp=head;
    while(temp!= NULL)
    {
       // temp= temp -> newnode;
        printf("%d ",temp-> data);
        temp=temp->next;

    }
}

