#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;

};
struct node * buildtree()
{
    int data1;
    printf("Enter the data:");
    scanf("%d",&data1);
    if(data1==-1)
    {
        return NULL;
    }
    struct node *newroot;
    newroot=(struct node*)malloc(sizeof(struct node));
    newroot->data=data1;
    printf("the left node of the newroot is %d",data1);
    newroot->left=buildtree();
    printf("the right node of the newroot is %d",data1);
    newroot->right=buildtree();
    return newroot;
}
int maxheight(struct node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    else{
        int l= maxheight(root->left);
        int r= maxheight(root->right);
        return (1+(l>=r)?(l:r));
        
    }

}
int main()
{
struct node *root;
root=NULL;
root= buildtree();
maxheight(root);
}

