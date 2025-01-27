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
    printf("display the elements");
    for(int i=0; i<size ;i++)
   
    {
        printf("%d",a[i]);

    }
    return 0;
}