#include<stdio.h>
int main ()
{

int num;

printf("Enter Any Number :");
scanf("%d",&num);
if(num>0)
{

    printf("%d is a +ve number",num);
}
else if(num<0)
{
    printf("%d is a -ve number",num);
}
else
{
    printf("you enter zero",num);
}
  return 0;

}













