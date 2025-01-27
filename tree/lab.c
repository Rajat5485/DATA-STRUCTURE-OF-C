
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define size 7

int main()
{
  int arr[size] = {2, 4, 6, 1, 3, 5, 7};

  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  for (int i = 0; i < size - 1; i++)
  {
    bool flag = true;
    for (int j = 0; j < size - 1 - i; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = false;
      }
    }
    if (flag==true)
    {
      exit(1);
    }
  }
  printf("\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", arr[i]);
  }
  return 0;
}
