#include<stdio.h>
int main()
{
    int a[50],size;
    printf("enter the size  of array:");
    scanf("%d",&size);
    printf("Enter the element of array:");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Display the element of array:\n");
    for(int i=0; i<size; i++)
    {
        printf("%d",a[i]);
    }
    int num,count=0;
    printf("\n enter the number for search:");
    scanf("%d",&num);
    for(int i=0; i<size; i++)
    {
        if(num==a[i])
        {
            count++;

           
        
            
        }
    } 
    printf("%d",count);
}
    