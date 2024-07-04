#include<stdio.h>
void main ()
{
 int num;
 printf("enter an integer :");
 scanf("%d",&num);

 if(num%5==0 && num%11==0)
    printf("given number is divisible by both 5 and 11",num);
 else
    printf("given number is not divisible by both 5 and 11",num);


}
