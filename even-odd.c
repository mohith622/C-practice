#include<stdio.h>
#include<stdlib.h>

void main()
{

  int num;
  system("cls");
  printf("\n\n Enter Any Number");
  scanf("%d",&num);

  if(num%2==0)
    printf("\n\n Given Number is Even %d",num);
    else
    printf("\n\n Given Number is Odd %d",num);
        getch();
}
