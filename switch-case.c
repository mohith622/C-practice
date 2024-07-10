#include<stdio.h>
void main ()
{
   int option,a,b,c;
  printf("\n choose any option :");
  printf("\n 1.Add ");
  printf("\n 2.Sub ");
  printf("\n 3.Multiplication ");
  printf("\n 4.Division ");

  printf("\n\n\n Enter Any Option :");
  scanf("%d",&option);


  switch(option)
    {

  case 1:
    printf("\n\n You Have Chosen Sum Of Two Values ");
    printf("\n Enter a value :");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a+b;
    printf("\n\n The Sum Of The Two values are %d",c);
    break;
  case 2:
    printf("\n\n You have Chosen Sub of two values ");
    printf("\n Enter a Value :");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a-b;
    printf("\n\n The Sub Of Two values are %d",c);
     break;
  case 3:
    printf("\n\n You Have Chosen Multiplication of two values ");
   printf("\n Enter a value:");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a*b;
    printf("\n\n The Multiplication of two values are %d",c);
    break;
  case 4:
    printf("\n\n You Have Chosen Division of Two Values");
    printf("\n Enter a value :");
    scanf("%d",&a);
    printf("\n Enter b value :");
    scanf("%d",&b);
    c=a/b;
    printf("\n\n The Division of two values are %d",c);
    break;

    default:
    printf("given age is invalid");
     break;

    }




}
