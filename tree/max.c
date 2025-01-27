#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *buildtree()
{
int data1;
printf("\nEnter the data ");
scanf("%d",&data1);
if(data1==-1)
{
    return NULL;
}
struct node *newroot;
newroot=(struct node*)malloc(sizeof(struct node));
 newroot->data=data1;
 printf("\n Enter the data of left child ");
 newroot->left = buildtree();
 printf("\n Enter the data of right child ");
 newroot->right = buildtree();
 return newroot;
}
int main()
{
    struct node*root=NULL;
    root=buildtree();
}

