#include<stdio.h>
void main ()
{
 int i,j,table,end;
 printf("\n Enter Which Table do you want :");
 scanf("%d",&table);
 printf("\n Enter how many numbers you want :");
 scanf("%d",&end);


 for(i=table;i<=table;i++)
 {

     for(j=1;j<=end;j++)
     {
         printf("%d * %d =%d",i,j,i*j);
         printf("\n");
     }




 }




}
