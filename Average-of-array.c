#include<stdio.h>
void main ()
{
   int i;
   int arr[]={10,20,30,40,50};
   int size=5;

    printf("Array Elements :");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    int sum=0;
    for(i=0;i<size;i++)
    {
        sum+=arr[i];
    }
    float average = (float)sum/size;

     printf("Average of array elements: %.2f\n", average);


}
