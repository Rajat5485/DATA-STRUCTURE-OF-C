//deletion from a binary search tree
#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* insert(struct node* root,int val){
    if(root==NULL){
        struct node* newroot=(struct node*)malloc(sizeof(struct node));
        newroot->data=val;
        newroot->left=NULL;
        newroot->right=NULL;
        return newroot;
    }
    if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(struct node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
struct node* minval(struct node* root){
    if(root->left==NULL){
        return root;
    }
    return root->left;
}
struct node* delete(struct node* root,int del){
    if(root==NULL){
        return root;
    }
    if(root->data==del){
            //0 child
        if(root->left==NULL && root->right==NULL){
            free(root);
            return NULL;
        }
            //1 child in left
        else if(root->left!=NULL && root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
            //1 child in right
        else if(root->right!=NULL && root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
        }
            //2 child
        else if(root->left!=NULL && root->right!=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=delete(root->right,mini);
            return root;
        }
    }
    else if(root->data>del){
        root->left=delete(root->left,del);
        return root;
    }
    else if(root->data<del){
        root->right=delete(root->right,del);
        return root;1
    }
}
int main(){
    struct node* root=NULL;
    while(1){
    printf("what do you want to do: \n1--->insert\n2--->display\n3--->delete\n4--->exit\n\n");
    int ans;
    scanf("%d",&ans);
    if(ans==1){
        printf("write the data of node to insert: ");
        int val;
        scanf("%d",&val);
        root=insert(root,val);
    }
    if(ans==2){
        printf("displaying the tree: \n\n");
        inorder(root);
        printf("\n\n");
    }
    if(ans==3){
        printf("write the val of node to delete: ");
        int del;
        scanf("%d",&del);
        root=delete(root,del);
    }
    if(ans==4){
        break;
    }
    }
}