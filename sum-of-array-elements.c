#include<stdio.h>
void main ()

{
  int arr[]={1,2,3,4,5};
  printf("Array Elements :");

  for(int i=0;i<5;i++)
  {
      printf("%d",arr[i]);
  }
    printf("\n");

    int sum=0;
    for(int i=0;i<5;i++)
    {

    sum+=arr[i];
    }
    printf("Sum Of Array Elements %d\n",sum);



}
