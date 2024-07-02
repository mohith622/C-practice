#include<stdio.h>
void main ()
{

int i,n,sum=0;
printf("\n Enter how many numbers you to sum :");
scanf("%d",&n);

for(i=0;i<=n;i++)
{
    sum+=i;

}
   printf("\n the sum of first n natural numbers are %d",sum);

  }


