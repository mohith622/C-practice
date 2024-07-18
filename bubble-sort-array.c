#include<stdio.h>
void main ()
{
  int i;
  int arr[]={1,4,2,3,5};
  int size=5;

  printf("Original Array :");
  for(i=0;i<size;i++)
  {
      printf("%d",arr[i]);
  }
    printf("\n");

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted Array :");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");






}
