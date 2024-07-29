#include<stdio.h>
int globalVar=10;

void testfunction ()
{
    printf("global variables inside the function :%d\n",globalVar);

}
int main (){

printf("global variable in main : %d\n",globalVar);

int globalVar=20;

printf("Modified global variable is :%d\n",globalVar);


testfunction ();
return 0;





}

