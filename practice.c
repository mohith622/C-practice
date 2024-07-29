#include<stdio.h>

void increment (){
static int a;

printf("Static variable :%d\n",a);

}
int main (){

for(int a=0;a<=4;a++){
    printf("the increment in static variable :%d\n",a);
}
return 0;
}


