In C programming language, a string is a sequence of characters stored in contiguous memory locations, typically terminated by a null character ('\0'). Strings in C are represented as arrays of characters where the last element is a null character, marking the end of the string.

Characteristics of Strings in C:

Array of Characters: 
                    Strings in C are represented as arrays of characters (char), where each character corresponds to an element in the array. For example, "Hello" is stored as { 'H', 'e', 'l', 'l', 'o', '\0' }.

Null Terminator: 
                    Every string in C is terminated by a null character ('\0'). This character has the ASCII value of 0 and marks the end of the string. It is crucial for functions that manipulate strings to determine the end of the string.

Mutable: 
            Strings in C are mutable, meaning their contents can be modified after they are defined. However, care must be taken to ensure that operations do not exceed the allocated memory bounds of the string.

Defined by Double Quotes: 
                            Strings literals in C are defined within double quotes ("). For example, 'Hello'" defines a string literal in C.


Example:

Here is a simple example demonstrating a string in C:

#include <stdio.h>

int main() {
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("Greeting: %s\n", greeting);

    return 0;
}

Explanation:

char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0
'};: Declares an array greeting of characters with a size of 6. The characters 'H', 'e', 'l', 'l', 'o' form the string "Hello", and '\0' is the null terminator explicitly added at the end.
printf("Greeting: %s\n", greeting);: Prints the string stored in greeting using %s format specifier, which expects a null-terminated string.
Output:

Greeting: Hello
String Handling Functions:
C provides several built-in functions for handling strings in the <string.h> library, such as:

strlen(): Calculates the length of a string.
strcpy(): Copies one string to another.
strcat(): Concatenates (appends) one string to the end of another.
strcmp(): Compares two strings lexicographically.


A string is an array of characters terminated by a null character \0. It is used to represent a sequence of characters (text). Here, 

#For Example:


Basic Example

#include <stdio.h>

int main() {
    // Declaring and initializing a string
    char greeting[] = "Hello, World!";

    // Printing the string
    printf("Greeting: %s\n", greeting);

    // Accessing individual characters in the string
    printf("First character: %c\n", greeting[0]);
    printf("Fourth character: %c\n", greeting[3]);

    return 0;
}

Explanation:

char greeting[] = "Hello, World!";: Declares and initializes a string greeting with the text "Hello, World!". The compiler automatically appends a null character \0 at the end of the string.
printf("Greeting: %s\n", greeting);: Prints the entire string using %s format specifier.
printf("First character: %c\n", greeting[0]);: Accesses and prints the first character of the string using array indexing (greeting[0]).
printf("Fourth character: %c\n", greeting[3]);: Accesses and prints the fourth character of the string (greeting[3]).

Output:

Greeting: Hello, World!
First character: H
Fourth character: l




Example with String Input

#include <stdio.h>

int main() {
    char name[20]; // Declare a string with a maximum capacity of 20 characters
    
    // Prompting user for input
    printf("Enter your name: ");
    scanf("%s", name); // Reading user input and storing it in 'name'

    // Displaying the entered name
    printf("Hello, %s!\n", name);

    return 0;
}


Explanation:

char name[20];: Declares an array name capable of holding up to 19 characters plus a null terminator.
scanf("%s", name);: Reads a string (sequence of characters) from the user input and stores it in the array name.
printf("Hello, %s!\n", name);: Prints a greeting message with the user-provided string using %s.
Output (example):

Enter your name: CloudGen
Hello, CloudGen!




Advanced Example with String Manipulation


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


Explanation:

strcpy(str3, str1);: Copies contents of str1 into str3.
strcat(str3, " ");: Appends a space to str3.
strcat(str3, str2);: Appends str2 to str3, resulting in str3 containing "Hello World".
strlen(str3): Returns the length of str3 excluding the null terminator.
strcmp(str1, str2) == 0: Compares str1 and str2. Returns 0 if they are equal.

Output:


Concatenated string: Hello World
Length of str3: 11
str1 and str2 are not equal

Key Points:
Strings in C are represented as arrays of characters ending with a null character ('\0').
String operations like concatenation (strcat), copying (strcpy), and comparison (strcmp) are commonly used with strings in C.
Input and output functions (scanf, printf) are used to manipulate and display strings.