#include<stdio.h>
int main()
{
    int top=-1;
    int stack[50],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the data for stack:");
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&stack[i]);
        top++;
    }
    if(top==-1)
    {
        printf("underflow condition");
    }
    else
    {
    printf("display the elements in stack");
     for(int i=0;i<=top;i++)
    {
      printf("%d",stack[i]);
      printf("\n");
    }
    }
    return 0;
}