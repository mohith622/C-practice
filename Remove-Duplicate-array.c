#include <stdio.h>
void main() {

    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = 7;


    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    int unique[size];
    int k = 0;

    for (int i = 0; i < size; i++) {
        int duplicate = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i] == unique[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            unique[k++] = arr[i];
        }
    }


    printf("Array after removing duplicates: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

}

