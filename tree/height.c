#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* left;
struct node* right;
};
struct node* buildtree(){
printf("enter the data: ");
int data2;
scanf("%d",&data2);
if(data2==-1){
    return NULL;
}
struct node* newroot=(struct node*)malloc(sizeof(struct node));
newroot->data=data2;
printf("write data for left child of %d\n",data2);
newroot->left=buildtree();
printf("write data for right child of %d\n",data2);
newroot->right=buildtree();
return newroot;
}
void inorder(struct node* root){
if(root==NULL){
    return ;
}
inorder(root->left);
printf("%d ",root->data);
inorder(root->right);
}
void preorder(struct node* root){
if(root==NULL){
    return ;
}
printf("%d ",root->data);
preorder(root->left);
preorder(root->right);
}
void postorder(struct node* root){
if(root==NULL){
    return ;
}
postorder(root->left);
postorder(root->right);
printf("%d ",root->data);
}
int NN(struct node* root){
    if(root==NULL){
        return 0;
    }
    return 1+NN(root->left)+NN(root->right);
}
int NL(struct node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    return NL(root->left)+NL(root->right);
}
int NFN(struct node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left!=NULL && root->right!=NULL){
        return 1+ NFN(root->left)+NFN(root->right);
    }
}

int main(){
struct node* root=NULL;
root=buildtree();
printf("\n\n");
printf("printing inorder traversal: ");
inorder(root);
printf("\n\n");
printf("printing preorder traversal: ");
preorder(root);
printf("\n\n");
printf("printing postorder traversal: ");
postorder(root);
printf("\n\n");
printf("no. of total nodes in B.T: ");
int ans=NN(root);
printf("%d",ans);
printf("\n\n");
printf("no. of leaf nodes in B.T: ");
ans=NL(root);
printf("%d",ans);
printf("\n\n");
printf("no. of full nodes in B.T: ");
ans=NFN(root);
printf("%d",ans);
printf("\n\n");
}
