 // A square matrix A of size m x n is said to be symmetric if element a[i][j]= a[j][i] for all values of I and J . write a function say,int is symmetric (int a[][],int n) that return value 1 if the input matrix is symmetric else return 0.

 /*#include<stdio.h>
 int main()
 {
    int a[10][10],i,j,m,n;
    printf("enter the number of row:");
    scanf("%d",&m);
    printf("enter the number of column:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("diplay the element of array");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
    }
    int count=0;
    printf("\n check the matrix is symmetric");
     for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
    {
        if(a[i][j]!=a[j][i])
        {
            count++;
            break;
        }
    }
    }
    
    if(count!=0)
    {
        printf("\n Entered matrix is not symmetic");

    }
    if(count==0)
    {
        printf("\n Entered matrix is symmetic");

    }
    }
    #include <stdio.h>

int isSymmetric(int a[][100], int n) {
    // Check each element against its corresponding symmetric element
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                // If any element is not equal to its symmetric element, return 0
                return 0;
            }
        }
    }
    // If all elements satisfy the condition, return 1
    return 1;
}

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[100][100];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    if (isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
*/
//Write a function that removes leading spaces from a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int length;
    length = strlen(s);
    printf("enter the string with null character");
    
    scanf("%s",&s[i]);
}
    for(int i=0;i< length;i++)
    {
        if(s[i]==' ')
        {
            for(int j=0; j<length ;j++)
            s[i]=s[i+1];
        }
    }   for(int i=0;i< length;i++)
{
        printf("%c",s[i]);
}

}




