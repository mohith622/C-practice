#include<stdio.h>
void main ()

{
  int a,b,c;
  printf("Enter three sides of a triangle");
  scanf("%d %d %d",&a,&b,&c);

  if(a==b && b==c && c==a)
  {
      printf("this is a equilateral triangle \n");
  }
    else if(a==b || b==c || c==a)
    {
        printf("this is a iscosles triangle \n");
    }
    else
    {
        printf("this is a scalene triangle \n");
    }












}
