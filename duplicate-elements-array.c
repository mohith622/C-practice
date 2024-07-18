#include <stdio.h>

void main()
{


    int arr[] = {2, 4, 4, 1, 3, 1, 5, 3};
    int size = 8;


    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Duplicate elements in the array: ");
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }
    printf("\n");

}


