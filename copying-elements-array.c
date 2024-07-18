#include <stdio.h>
void main ()
{
    int i;
   int arr1[]={1, 2, 3, 4, 5};
   int arr2[5];
   for(int i=0;i<5;i++)
   {
    arr2[i]=arr1[i];
   }
       printf("Elements of arr2 :");

    for(int i=0;i<5;i++)
    {
        printf("%d",arr2[i]);

    }
    printf("\n");

}
