#include<stdio.h>
void main ()
{

    int matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int matrix2[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int resultmatrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            resultmatrix[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }

  printf("matrix 1:\n");
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {

          printf(" %d",matrix1[i][j]);
      }
      printf("\n");
  }

  printf("matrix 2:\n");
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {

          printf(" %d",matrix2[i][j]);
      }
      printf("\n");
  }
    printf("\n sub of matrices:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf(" %d",resultmatrix[i][j]);
        }
    printf("\n");
    }

}

