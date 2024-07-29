#include<stdio.h>
#include<stdlib.h>

int main (){
int *ptr;
int n;
printf("Enter number of elements :%d\n");
scanf("%d",&n);
    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL){

        printf("Memory Allocation Failed \n");
        return 1;
    }
    printf("Enter %d Elements: \n",n);
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    printf("Elements Entered :\n");
    for(int i=0;i<n;i++){
        printf("%d",*(ptr+i));
    }

    free(ptr);
    return 0;

















}
