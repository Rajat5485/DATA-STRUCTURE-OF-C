#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
void traversal(int x,int n)
{
struct node *head;
head = (struct node*)malloc(sizeof(struct node));
head->data=x;
head->next=NULL;

struct node *temp;
temp=head;
for(int i=2;i<=n;i++)
{
struct node*newnode;
newnode = (struct node*)malloc(sizeof(struct node));
int p;
printf("Enter the data:");
scanf("%d",&p);
newnode->data=p;
newnode->next=NULL;
temp->next=newnode;
temp=temp->next;
}
temp=head;
 while(temp!=NULL)
    {

        x=temp->data;
        printf("The linked list is %d \n ",x);
        temp=temp->next;
    }
}

int main()
{
    printf("------->Traversal a linked list<------");
    int n;
    printf("\nenter the number of node:\n");
    scanf("%d",&n);
    int x;
    printf("\nInsert the data in linked list:");
    scanf("%d",&x);
    traversal(x,n);
   
}


      