#include<stdio.h>
int main()
{
    int a[30],size;
    printf("enter the size of array");
    scanf("%d",&size);
    printf("enter the element");
    for(int i=0; i<size ;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("enter the data you want to insert:");
    printf("\n");
    int pos;
    printf("enter the position:");
    scanf("%d",&pos);
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=size-1; i>pos-1 ;i--)
    {
        a[i+1]=a[i];


    }
    a[pos-1]=num;
    size++;
    return 0;
}
