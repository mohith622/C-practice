#include<stdio.h>
void main ()
{

    int matrix1[3][3]={{4,4,4},{4,4,6},{2,2,2}};
    int resultmatrix[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            resultmatrix[i][j]=matrix1[i][j]/2;
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


    printf("\n division of matrice:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {

            printf(" %d",resultmatrix[i][j]);
        }

    printf("\n");
    }
}

