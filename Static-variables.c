#include<stdio.h>

void increment (){
static int staticVar;


staticVar++;
printf("Static variable :%d\n",staticVar);

}
int main (){

increment();
increment();
increment();
return 0;

}


