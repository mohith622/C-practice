#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char str3[20];

    // Concatenate str1 and str2 into str3
    strcpy(str3, str1); // Copy str1 into str3
    strcat(str3, " ");  // Concatenate a space
    strcat(str3, str2); // Concatenate str2 into str3

    // Print the concatenated string
    printf("Concatenated string: %s\n", str3);

    // Length of str3
    printf("Length of str3: %zu\n", strlen(str3));

    // Compare str1 and str2
    if (strcmp(str1, str2) == 0) {
        printf("str1 and str2 are equal\n");
    } else {
        printf("str1 and str2 are not equal\n");
    }

    return 0;
}
