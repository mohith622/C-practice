
#include<stdio.h>
void main ()
{
int i,sum,num[5]={1,2,3,4,10};
printf("\n the array values are %d",num[0]);
printf("\n the array values are %d",num[1]);
printf("\n the array values are %d",num[2]);
printf("\n the array values are %d",num[3]);
printf("\n the array values are %d",num[4]);

for(i=0;i<5;i++)
{
    sum+=num[i];
}
printf("\n\n sum of elements are %d",sum);

}
