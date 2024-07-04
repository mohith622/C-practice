#include<stdio.h>
void main ()

{
  int num;
  printf("Enter a intger");
  scanf("%d",&num);

  if(num>0 && num%2==0)
    {
        printf("it is a positive and a even number",num);
    }
    else if (num>0)
    {
        printf("it is a positive and not a even number",num);
    }
    else
    {
        printf("it is a negative number",num);
    }







}
