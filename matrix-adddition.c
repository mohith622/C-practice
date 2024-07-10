#include<stdio.h>
void main ()
{
   int matrix1[3][3],matrix2[3][3],resultmatrix[3][3];
   printf("Enter The Values Of matrix1 :\n");
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf(" %d",&matrix1[i][j]);

    }
    printf("\n");
   }

   printf("Enter The Values Of matrix2 :\n");
   for(int i=0;i<3;i++)
   {
    for(int j=0;j<3;j++)
    {
        scanf(" %d",&matrix2[i][j]);

    }
    printf("\n");
   }

printf("sum of the matrices :\n");
for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++)
    {
    resultmatrix[i][j]=matrix1[i][j]+matrix2[i][j];
    printf(" %d",resultmatrix[i][j]);
    }
    printf("\n");
}


}
