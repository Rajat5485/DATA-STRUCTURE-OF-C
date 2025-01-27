#include<stdio.h>
int main()
{
    int i=0;
    int a[50],size;
    printf("eneter the size of array:");
    scanf("%d",&size);
    printf("enter the element of array:");
    for(i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("display the element of array:");
    for(i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    int temp;
    for(i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }

        }
    }
    printf("now required sorted array:");
    for(i=0;i<size;i++)
    {
    printf("%d",a[i]);
    }
}
