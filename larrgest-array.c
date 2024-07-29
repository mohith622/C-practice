#include<stdio.h>
void main ()

{
  int arr[]={5, 8, 10, 4, 3, 2};
  printf("Array Elements :");

  for(int i=0;i<6;i++)
  {
      printf("%d",arr[i]);
  }
    printf("\n");

    int max=arr[0];
    for(int i=0;i<6;i++)
    {
      if(arr[i]>max)
      {
        max=arr[i];
      }

    }
    printf("Largest Value Of Array Elements %d\n",max);



}

