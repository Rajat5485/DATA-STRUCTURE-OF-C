#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal( struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d \n  ", ptr -> data);
        ptr = ptr -> next ;
    }

}
struct Node * First(struct Node *head, int data)
{
struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
ptr-> next =head;
ptr-> data=data;
return ptr;
}

int main()
{
struct Node *head;
struct Node  *second;
struct Node *third;

head = (struct Node *)malloc(sizeof (struct Node));
second = (struct Node *)malloc(sizeof (struct Node));
third = (struct Node *)malloc(sizeof (struct Node));

head -> data = 11;
head -> next = second;

second -> data = 23;
second -> next = third; 

third -> data = 11;
third -> next = NULL;

 traversal(head); 
 head = First(head,60);
 traversal(head);
return 0;
}
/*#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void traversal( struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element : %d \n  ", ptr -> data);
        ptr = ptr -> next ;
    }

}

//struct Node * First(struct Node *head, int data)
//{
//struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//ptr-> next =head;
//ptr-> data=data;
//return ptr;
//}

struct Node * insertatindex(struct Node *head,int data , int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while (i!=index-1)
    {
        p= p->next;
        i++;
    }
    ptr->data=data;
    ptr->next = p->next;
    p->next=ptr;
}

int main()
{
struct Node *head;
struct Node  *second;
struct Node *third;

head = (struct Node *)malloc(sizeof (struct Node));
second = (struct Node *)malloc(sizeof (struct Node));
third = (struct Node *)malloc(sizeof (struct Node));

head -> data = 11;
head -> next = second;

second -> data = 23;
second -> next = third; 

third -> data = 11;
third -> next = NULL;

 traversal(head); 
 //head = First(head,60);
 head=insertatindex(head,60,1);
 traversal(head);
return 0;
}*/