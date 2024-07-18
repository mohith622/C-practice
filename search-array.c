#include<stdio.h>
void main ()

{
  int i;
  int arr[]={1,2,3,4,5};
  int size=5;
  int key=5;

  printf("Array Elements :");
  for(i=0;i<size;i++)
  {
      printf("%d",arr[i]);
  }
  printf("\n");
   int found=0;
   for(i=0;i<size;i++)
   {
       if(arr[i]==key)
       {
         found=1;
          break;
       }
   }
   if(found)
   {
       printf("Element %d is found in Array \n",key);
   }
   else
   {
       printf("Element %d is not found in Array \n",key);
   }

}
