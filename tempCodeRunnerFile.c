#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node* inst_at_beginning(struct node *head, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = head;
    return temp;
}

int main(){
    struct node *head = malloc(sizeof(struct node));
    head->data = 70;
    head->link = NULL;
    struct node *ptr = head;

    ptr = inst_at_beginning(ptr, 89);
    ptr = inst_at_beginning(ptr, 92);
    ptr = inst_at_beginning(ptr, 93);

    ptr = head;
    while(ptr != NULL){
        printf("list is %d\n", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}
