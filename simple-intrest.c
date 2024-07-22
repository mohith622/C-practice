#include<stdio.h>
void main ()
{
  float p,r,t,s;
  printf("Enter the principle amount :");
  scanf("%f",&p);
  printf("Enter the rate of intrest :");
  scanf("%f",&r);
  printf("Enter amount of time :");
  scanf("%f",&t);

  s=(p*r*t)/100;
  printf("The simple intrest is : %f",s);


}
