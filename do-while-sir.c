In C programming language, do-while is a looping construct that allows you to execute a block of statements repeatedly based on a condition. It is similar to the while loop but with a key difference: the do-while loop executes its body of code at least once, regardless of whether the condition is initially true or false.


Syntax of do-while loop in C:

do {
    // statements to be executed
} while (condition);


do: It is the keyword that starts the do-while loop.
{ ... }: Represents the body of the loop, containing statements that are executed repeatedly.
while (condition);: This is the loop condition. The loop continues executing as long as this condition evaluates to true (non-zero). If the condition is false (zero), the loop terminates and control moves to the statement immediately following the while.


How do-while loop works:

Initialization:
 The statements inside the do block are executed first, regardless of the loop condition.

Condition Check:
After executing the statements inside the do block, the loop checks the while condition.


Execution:
If the condition evaluates to true (non-zero), the loop body is executed again. This process repeats until the condition becomes false (zero).


Termination:
 Once the condition becomes false, the control exits the loop and continues with the next statement after the while loop.



Key Points:

Guaranteed Execution: The do-while loop guarantees that the loop body executes at least once, even if the condition is false from the beginning.

Usage: It is useful when you need to execute a block of code at least once and then decide whether to repeat based on a condition. For example, when processing user input, you might want to validate the input inside the loop and repeat until valid input is provided.

Syntax: Ensure that there is a semicolon (;) after the closing parenthesis of the while condition. This marks the end of the do-while loop statement.

Example:
Here's' a simple example to illustrate the do-while loop in action:


#include <stdio.h>

int main() {
    int i = 1;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    printf("\n");

    return 0;
}
Output:

Copy code
1 2 3 4 5

In this example, the do-while loop starts with i initialized to 1.
The loop body prints the value of i, increments i, and repeats until i is greater than 5.
Even if i is initially 1, the loop executes at least once because the condition (i <= 5) allows it.



Conclusion:


The do-while loop is a fundamental looping construct in C that ensures at least one execution of the loop body before checking the loop condition. It is useful for scenarios where you need to perform an action first and then decide based on a condition whether to repeat the action. Understanding how do-while works is essential for writing efficient and logical C programs that involve iterative tasks.



1. Print numbers from 1 to 10

#include <stdio.h>

int main() {
    int i = 1; // Initialize the loop variable 'i' to 1
    do {
        printf("%d\n", i); // Print the current value of 'i'
        i++; // Increment 'i' by 1
    } while (i <= 10); // Continue the loop while 'i' is less than or equal to 10
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int i = 1;): A variable i is initialized to 1. This will be our counter that starts from 1.
Start of do-while loop (do {): The do keyword starts the loop. The code inside the loop will be executed at least once.
Print statement (printf("%d\n", i);): The printf function is called to print the current value of i.
Increment (i++;): The variable i is incremented by 1. This means i will be 2 the next time the loop runs.
Condition check (} while (i <= 10);): The while keyword checks if i is less than or equal to 10. If the condition is true, the loop runs again. If false, the loop stops.
End of program (return 0;): The main function returns 0 to indicate the program finished successfully.



Output:


1
2
3
4
5
6
7
8
9
10

================================



2. Sum of numbers from 1 to 10


#include <stdio.h>

int main() {
    int i = 1, sum = 0; // Initialize 'i' to 1 and 'sum' to 0
    do {
        sum += i; // Add the current value of 'i' to 'sum'
        i++; // Increment 'i' by 1
    } while (i <= 10); // Continue the loop while 'i' is less than or equal to 10
    printf("Sum = %d\n", sum); // Print the total sum
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int i = 1, sum = 0;): Two variables are initialized. i is the counter starting from 1, and sum will store the total sum of the numbers.
Start of do-while loop (do {): The do keyword starts the loop.
Add to sum (sum += i;): The current value of i is added to sum. For example, when i is 1, sum becomes 1.
Increment (i++;): The variable i is incremented by 1. So, i will be 2 the next time the loop runs.
Condition check (} while (i <= 10);): The loop continues as long as i is less than or equal to 10.
Print sum (printf("Sum = %d\n", sum);): After the loop ends, the printf function prints the total sum.
End of program (return 0;): The main function returns 0.


Output:

makefile

Sum = 55

============================================



3. Factorial of a number


#include <stdio.h>

int main() {
    int n = 5, fact = 1, i = 1; // Initialize 'n' to 5, 'fact' to 1, and 'i' to 1
    do {
        fact *= i; // Multiply 'fact' by 'i' and store the result in 'fact'
        i++; // Increment 'i' by 1
    } while (i <= n); // Continue the loop while 'i' is less than or equal to 'n'
    printf("Factorial of %d = %d\n", n, fact); // Print the factorial of 'n'
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 5, fact = 1, i = 1;): Three variables are initialized. n is the number for which we want to find the factorial, fact starts at 1 to accumulate the product, and i is the counter.
Start of do-while loop (do {): The do keyword starts the loop.
Multiply (fact *= i;): The current value of i is multiplied with fact. For example, when i is 1, fact becomes 1 (1 * 1). When i is 2, fact becomes 2 (1 * 2).
Increment (i++;): The variable i is incremented by 1.
Condition check (} while (i <= n);): The loop continues as long as i is less than or equal to n.
Print factorial (printf("Factorial of %d = %d\n", n, fact);): After the loop ends, the printf function prints the factorial of n.
End of program (return 0;): The main function returns 0.



Output:

mathematica

Factorial of 5 = 120

===============================================

4. Reverse a number

#include <stdio.h>

int main() {
    int n = 1234, reversed = 0; // Initialize 'n' to 1234 and 'reversed' to 0
    do {
        reversed = reversed * 10 + n % 10; // Add the last digit of 'n' to 'reversed'
        n /= 10; // Remove the last digit from 'n'
    } while (n != 0); // Continue the loop while 'n' is not 0
    printf("Reversed number = %d\n", reversed); // Print the reversed number
    return 0; // Return 0 to indicate successful execution
}


Explanation:

Initialization (int n = 1234, reversed = 0;): Two variables are initialized. n is the number to be reversed, and reversed will store the reversed number.
Start of do-while loop (do {): The do keyword starts the loop.
Update reversed (reversed = reversed * 10 + n % 10;): The last digit of n (obtained using n % 10) is added to reversed. Initially, reversed is 0, so reversed becomes 4.
Remove last digit (n /= 10;): The last digit is removed from n by integer division by 10.
Condition check (} while (n != 0);): The loop continues as long as n is not 0.
Print reversed (printf("Reversed number = %d\n", reversed);): After the loop ends, the printf function prints the reversed number.
End of program (return 0;): The main function returns 0.




Output:

java

Reversed number = 4321

================================================================

5. Check if a number is prime

#include <stdio.h>

int main() {
    int n = 29, i = 2, isPrime = 1; // Initialize 'n' to 29, 'i' to 2, and 'isPrime' to 1
    do {
        if (n % i == 0) { // Check if 'n' is divisible by 'i'
            isPrime = 0; // Set 'isPrime' to 0
            break; // Exit the loop
        }
        i++; // Increment 'i' by 1
    } while (i <= n / 2); // Continue the loop while 'i' is less than or equal to 'n / 2'
    if (isPrime) // Check if 'isPrime' is still 1
        printf("%d is a prime number.\n", n); // Print that 'n' is a prime number
    else
        printf("%d is not a prime number.\n", n); // Print that 'n' is not a prime number
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 29, i = 2, isPrime = 1;): Three variables are initialized. n is the number to check for primality, i is the counter starting from 2, and isPrime is set to 1 (true).
Start of do-while loop (do {): The do keyword starts the loop.
Check divisibility (if (n % i == 0) {): If n is divisible by i, isPrime is set to 0 (false) and the loop is exited using break.
Increment (i++;): The variable i is incremented by 1.
Condition check (} while (i <= n / 2);): The loop continues as long as i is less than or equal to half of n. This is because a larger factor of n would have a corresponding smaller factor already checked.
Print result: The if statement checks if isPrime is still 1. If true, n is prime. Otherwise, n is not prime.
End of program (return 0;): The main function returns 0.


Output:

29 is a prime number.


==================================================================


6. Calculate the sum of digits of a number

#include <stdio.h>

int main() {
    int n = 1234, sum = 0; // Initialize 'n' to 1234 and 'sum' to 0
    do {
        sum += n % 10; // Add the last digit of 'n' to 'sum'
        n /= 10; // Remove the last digit from 'n'
    } while (n != 0); // Continue the loop while 'n' is not 0
    printf("Sum of digits = %d\n", sum); // Print the sum of digits
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 1234, sum = 0;): Two variables are initialized. n is the number whose digits are to be summed, and sum will store the total sum of the digits.
Start of do-while loop (do {): The do keyword starts the loop.
Add last digit to sum (sum += n % 10;): The last digit of n (obtained using n % 10) is added to sum.
Remove last digit (n /= 10;): The last digit is removed from n by integer division by 10.
Condition check (} while (n != 0);): The loop continues as long as n is not 0.
Print sum (printf("Sum of digits = %d\n", sum);): After the loop ends, the printf function prints the sum of the digits.
End of program (return 0;): The main function returns 0.


Output:

java

Sum of digits = 10

============================================================


7. Calculate the product of digits of a number


#include <stdio.h>

int main() {
    int n = 1234, product = 1; // Initialize 'n' to 1234 and 'product' to 1
    do {
        product *= n % 10; // Multiply 'product' by the last digit of 'n'
        n /= 10; // Remove the last digit from 'n'
    } while (n != 0); // Continue the loop while 'n' is not 0
    printf("Product of digits = %d\n", product); // Print the product of digits
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 1234, product = 1;): Two variables are initialized. n is the number whose digits are to be multiplied, and product will store the total product of the digits.
Start of do-while loop (do {): The do keyword starts the loop.
Multiply last digit with product (product *= n % 10;): The last digit of n (obtained using n % 10) is multiplied with product.
Remove last digit (n /= 10;): The last digit is removed from n by integer division by 10.
Condition check (} while (n != 0);): The loop continues as long as n is not 0.
Print product (printf("Product of digits = %d\n", product);): After the loop ends, the printf function prints the product of the digits.
End of program (return 0;): The main function returns 0.



Output:

java

Product of digits = 24

================================================================

8. Reverse a string


#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello"; // Initialize the string
    int len = strlen(str); // Get the length of the string
    int i = 0;
    char temp;
    do {
        temp = str[i]; // Swap the characters
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
        i++;
    } while (i < len / 2); // Continue the loop until the middle of the string
    printf("Reversed string = %s\n", str); // Print the reversed string
    return 0; // Return 0 to indicate successful execution
}




Explanation:

Initialization (char str[] = "Hello";): A character array (string) is initialized with "Hello".
Get length (int len = strlen(str);): The length of the string is obtained using strlen.
Initialize variables (int i = 0; char temp;): i is the counter starting from 0, and temp is used for swapping characters.
Start of do-while loop (do {): The do keyword starts the loop.
Swap characters:
Temporary store (temp = str[i];): The i-th character of the string is temporarily stored in temp.
Swap (str[i] = str[len - i - 1]; str[len - i - 1] = temp;): The i-th character is swapped with the character at position len - i - 1.
Increment (i++;): The variable i is incremented by 1.
Condition check (} while (i < len / 2);): The loop continues until i is less than half of the string length.
Print reversed string (printf("Reversed string = %s\n", str);): After the loop ends, the printf function prints the reversed string.
End of program (return 0;): The main function returns 0.




Output:


Reversed string = olleH


=============================================================

9. Count the number of vowels in a string


#include <stdio.h>

int main() {
    char str[] = "Hello World"; // Initialize the string
    int i = 0, vowels = 0; // Initialize the loop variable and vowel count
    do {
        char c = str[i]; // Get the current character
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') // Check if the current character is a vowel
            vowels++; // Increment the vowel count
        i++; // Increment i by 1
    } while (str[i] != '\0'); // Continue the loop while the current character is not the null terminator
    printf("Number of vowels = %d\n", vowels); // Print the number of vowels
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (char str[] = "Hello World";): A character array (string) is initialized with "Hello World".
Initialize variables (int i = 0, vowels = 0;): i is the counter starting from 0, and vowels will store the count of vowels.
Start of do-while loop (do {): The do keyword starts the loop.
Get current character (char c = str[i];): The current character of the string is obtained.
Check for vowel (if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')): The condition checks if the current character is a vowel.
Increment vowel count (vowels++;): If the character is a vowel, vowels is incremented by 1.
Increment counter (i++;): The variable i is incremented by 1.
Condition check (} while (str[i] != '\0');): The loop continues as long as the current character is not the null terminator.
Print vowel count (printf("Number of vowels = %d\n", vowels);): After the loop ends, the printf function prints the number of vowels.
End of program (return 0;): The main function returns 0.



Output:

java

Number of vowels = 3

===============================================================

10. Count the number of words in a string


#include <stdio.h>

int main() {
    char str[] = "Hello World! This is C programming."; // Initialize the string
    int i = 0, words = 1; // Initialize the loop variable and word count
    do {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') // Check if the current character is a space and the next character is not a space or null terminator
            words++; // Increment the word count
        i++; // Increment i by 1
    } while (str[i] != '\0'); // Continue the loop while the current character is not the null terminator
    printf("Number of words = %d\n", words); // Print the number of words
    return 0; // Return 0 to indicate successful execution
}


Explanation:

Initialization (char str[] = "Hello World! This is C programming.";): A character array (string) is initialized with "Hello World! This is C programming.".
Initialize variables (int i = 0, words = 1;): i is the counter starting from 0, and words is initialized to 1 since theres at least one word.
Start of do-while loop (do {): The do keyword starts the loop.
Check for space (if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')): The condition checks if the current character is a space and the next character is not a space or the null terminator.
Increment word count (words++;): If the condition is true, words is incremented by 1.
Increment counter (i++;): The variable i is incremented by 1.
Condition check (} while (str[i] != '\0');): The loop continues as long as the current character is not the null terminator.
Print word count (printf("Number of words = %d\n", words);): After the loop ends, the printf function prints the number of words.
End of program (return 0;): The main function returns 0.


Output:

java

Number of words = 6


=========================================================================


11. Find the greatest common divisor (GCD) of two numbers


#include <stdio.h>

int main() {
    int a = 56, b = 98; // Initialize two numbers
    do {
        if (a > b)
            a -= b; // Subtract b from a if a is greater
        else
            b -= a; // Subtract a from b if b is greater
    } while (a != b); // Continue the loop while a is not equal to b
    printf("GCD = %d\n", a); // Print the GCD
    return 0; // Return 0 to indicate successful execution
}


Explanation:

Initialization (int a = 56, b = 98;): Two variables a and b are initialized with the numbers whose GCD is to be found.
Start of do-while loop (do {): The do keyword starts the loop.
Check and subtract (if (a > b) a -= b; else b -= a;): The larger number is reduced by the value of the smaller number.
Condition check (} while (a != b);): The loop continues as long as a is not equal to b.
Print GCD (printf("GCD = %d\n", a);): After the loop ends, the printf function prints the GCD, which will be the value of a (or b since they are equal).
End of program (return 0;): The main function returns 0.



Output:

makefile

GCD = 14

====================================================================================




12. Find the least common multiple (LCM) of two numbers


#include <stdio.h>

int main() {
    int a = 15, b = 20, max; // Initialize two numbers and max
    max = (a > b) ? a : b; // Determine the larger number
    do {
        if (max % a == 0 && max % b == 0) { // Check if max is a multiple of both a and b
            printf("LCM = %d\n", max); // Print the LCM
            break; // Exit the loop
        }
        max++; // Increment max by 1
    } while (1); // Continue the loop indefinitely
    return 0; // Return 0 to indicate successful execution
}


Explanation:

Initialization (int a = 15, b = 20, max;): Three variables are initialized. a and b are the numbers whose LCM is to be found, and max is used to find the LCM.
Determine larger number (max = (a > b) ? a : b;): The larger of a and b is assigned to max.
Start of do-while loop (do {): The do keyword starts the loop.
Check for LCM (if (max % a == 0 && max % b == 0)): If max is a multiple of both a and b, it is the LCM.
Print LCM (printf("LCM = %d\n", max);): The LCM is printed.
Exit loop (break;): The loop is exited using break.
Increment max (max++;): If max is not the LCM, it is incremented by 1.
Condition check (} while (1);): The loop continues indefinitely until the LCM is found.
End of program (return 0;): The main function returns 0.


Output:

makefile

LCM = 60


====================================================================================.


13. Check if a number is Armstrong


#include <stdio.h>
#include <math.h>

int main() {
    int n = 153, original, remainder, result = 0; // Initialize variables
    original = n; // Store the original number
    do {
        remainder = n % 10; // Get the last digit
        result += pow(remainder, 3); // Add the cube of the digit to result
        n /= 10; // Remove the last digit
    } while (n != 0); // Continue the loop while n is not 0
    if (result == original) // Check if the result is equal to the original number
        printf("%d is an Armstrong number.\n", original); // Print that it is an Armstrong number
    else
        printf("%d is not an Armstrong number.\n", original); // Print that it is not an Armstrong number
    return 0; // Return 0 to indicate successful execution
}


Explanation:

Initialization (int n = 153, original, remainder, result = 0;): Four variables are initialized. n is the number to check, original stores the original number, remainder is used to get digits, and result accumulates the sum of cubes.
Store original number (original = n;): The original number is stored in original.
Start of do-while loop (do {): The do keyword starts the loop.
Get last digit (remainder = n % 10;): The last digit of n is obtained.
Add cube to result (result += pow(remainder, 3);): The cube of the last digit is added to result.
Remove last digit (n /= 10;): The last digit is removed from n.
Condition check (} while (n != 0);): The loop continues as long as n is not 0.
Check Armstrong number (if (result == original)): If result equals the original number, it is an Armstrong number.
Print result (printf("%d is an Armstrong number.\n", original);): The result is printed.
End of program (return 0;): The main function returns 0.
Output:



153 is an Armstrong number.



====================================================================================

14. Print Fibonacci series up to n terms (continued)

#include <stdio.h>

int main() {
    int n = 10, t1 = 0, t2 = 1, nextTerm, i = 1; // Initialize variables
    printf("Fibonacci Series: %d, %d, ", t1, t2); // Print the first two terms
    do {
        nextTerm = t1 + t2; // Calculate the next term
        printf("%d, ", nextTerm); // Print the next term
        t1 = t2; // Update t1 to t2
        t2 = nextTerm; // Update t2 to nextTerm
        i++; // Increment i by 1
    } while (i <= n - 2); // Continue the loop until n-2 terms are printed
    printf("\n"); // Move to the next line
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 10, t1 = 0, t2 = 1, nextTerm, i = 1;): Variables n, t1, t2, nextTerm, and i are initialized. n is the number of terms to print, t1 and t2 are initialized to 0 and 1 respectively (first two Fibonacci numbers), nextTerm stores the next Fibonacci number, and i is the loop counter.

Print initial terms (printf("Fibonacci Series: %d, %d, ", t1, t2);): Prints the first two Fibonacci numbers.

Start of do-while loop (do {): The do keyword starts the loop.

Calculate next Fibonacci number (nextTerm = t1 + t2;): Calculates the next Fibonacci number by adding t1 and t2.

Print next Fibonacci number (printf("%d, ", nextTerm);): Prints the next Fibonacci number.

Update variables (t1 = t2; t2 = nextTerm;): Updates t1 to the value of t2 and t2 to the value of nextTerm to prepare for the next iteration.

Increment counter (i++;): Increments the loop counter i.

Condition check (} while (i <= n - 2);): Continues the loop until i reaches n - 2, ensuring n terms are printed.

Move to the next line (printf("\n");): Prints a new line after the Fibonacci series is printed.

End of program (return 0;): The main function returns 0 to indicate successful execution.




Output:

mathematica
Copy code
Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

====================================================================================
16. Check if a number is a palindrome

#include <stdio.h>

int main() {
    int n = 12321, reversedNumber = 0, originalNumber; // Initialize variables
    originalNumber = n; // Store the original number
    do {
        reversedNumber = reversedNumber * 10 + n % 10; // Reverse the number
        n /= 10; // Remove the last digit
    } while (n != 0); // Continue the loop while n is not 0
    if (originalNumber == reversedNumber) // Check if the original number is equal to the reversed number
        printf("%d is a palindrome.\n", originalNumber); // Print that it is a palindrome
    else
        printf("%d is not a palindrome.\n", originalNumber); // Print that it is not a palindrome
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 12321, reversedNumber = 0, originalNumber;): Variables n, reversedNumber, and originalNumber are initialized. n is the number to check, reversedNumber stores the reversed number, and originalNumber stores the original number.

Store original number (originalNumber = n;): Stores the original number in originalNumber.

Start of do-while loop (do {): The do keyword starts the loop.

Reverse the number (reversedNumber = reversedNumber * 10 + n % 10;): Reverses n by multiplying reversedNumber by 10 and adding the last digit of n.

Remove last digit (n /= 10;): Removes the last digit from n.

Condition check (} while (n != 0);): Continues the loop while n is not 0.

Check palindrome (if (originalNumber == reversedNumber)): Checks if originalNumber is equal to reversedNumber.

Print result (printf("%d is a palindrome.\n", originalNumber); or printf("%d is not a palindrome.\n", originalNumber);): Prints whether the number is a palindrome or not.

End of program (return 0;): The main function returns 0 to indicate successful execution.




Output:

12321 is a palindrome.
====================================================================================

17. Print multiplication table of a number

#include <stdio.h>

int main() {
    int n = 7, i = 1; // Initialize variables
    do {
        printf("%d x %d = %d\n", n, i, n * i); // Print the multiplication table entry
        i++; // Increment i by 1
    } while (i <= 10); // Continue the loop until 10 entries are printed
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 7, i = 1;): Variables n and i are initialized. n is the number whose multiplication table is to be printed, and i is the loop counter.

Start of do-while loop (do {): The do keyword starts the loop.

Print multiplication table entry (printf("%d x %d = %d\n", n, i, n * i);): Prints the multiplication table entry for n multiplied by i.

Increment counter (i++;): Increments the loop counter i by 1.

Condition check (} while (i <= 10);): Continues the loop until i is less than or equal to 10, printing 10 entries in total.

End of program (return 0;): The main function returns 0 to indicate successful execution.

Output:


7 x 1 = 7
7 x 2 = 14
7 x 3 = 21
7 x 4 = 28
7 x 5 = 35
7 x 6 = 42
7 x 7 = 49
7 x 8 = 56
7 x 9 = 63
7 x 10 = 70

====================================================================================

18. Calculate the factorial of a number

#include <stdio.h>

int main() {
    int n = 5, factorial = 1, i = 1; // Initialize variables
    do {
        factorial *= i; // Calculate the factorial
        i++; // Increment i by 1
    } while (i <= n); // Continue the loop until i is greater than n
    printf("Factorial of %d = %d\n", n, factorial); // Print the factorial
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 5, factorial = 1, i = 1;): Variables n, factorial, and i are initialized. n is the number whose factorial is to be calculated, factorial stores the result, and i is the loop counter.

Start of do-while loop (do {): The do keyword starts the loop.

Calculate factorial (factorial *= i;): Multiplies factorial by i to calculate the factorial.

Increment counter (i++;): Increments the loop counter i by 1.

Condition check (} while (i <= n);): Continues the loop until i is greater than n.

Print factorial (printf("Factorial of %d = %d\n", n, factorial);): Prints the factorial of n.

End of program (return 0;): The main function returns 0 to indicate successful execution.



Output:

Factorial of 5 = 120

====================================================================================

19. Calculate the sum of first n natural numbers

#include <stdio.h>

int main() {
    int n = 10, sum = 0, i = 1; // Initialize variables
    do {
        sum += i; // Add i to sum
        i++; // Increment i by 1
    } while (i <= n); // Continue the loop until i is greater than n
    printf("Sum of first %d natural numbers = %d\n", n, sum); // Print the sum
    return 0; // Return 0 to indicate successful execution
}
Explanation:

Initialization (int n = 10, sum = 0, i = 1;): Variables n, sum, and i are initialized. n is the number of natural numbers to sum, sum stores the result, and i is the loop counter.

Start of do-while loop (do {): The do keyword starts the loop.

Calculate sum (sum += i;): Adds i to sum to calculate the sum of first n natural numbers.

Increment counter (i++;): Increments the loop counter i by 1.

Condition check (} while (i <= n);): Continues the loop until i is greater than n.

Print sum (printf("Sum of first %d natural numbers = %d\n", n, sum);): Prints the sum of the first n natural numbers.

End of program (return 0;): The main function returns 0 to indicate successful execution.





Output:

Sum of first 10 natural numbers = 55

====================================================================================

20. Check if a number is prime


#include <stdio.h>

int main() {
    int n = 17, isPrime = 1, i = 2; // Initialize variables
    do {
        if (n % i == 0) { // Check if n is divisible by i
            isPrime = 0; // Set isPrime to 0 if divisible
            break; // Exit the loop
        }
        i++; // Increment i by 1
    } while (i <= n/2); // Continue the loop until i is greater than n/2
    if (isPrime) // Check if isPrime is true (1)
        printf("%d is a prime number.\n", n); // Print that it is a prime number
    else
        printf("%d is not a prime number.\n", n); // Print that it is not a prime number
    return 0; // Return 0 to indicate successful execution
}



Explanation:

Initialization (int n = 17, isPrime = 1, i = 2;): Variables n, isPrime, and i are initialized. n is the number to check for primality, isPrime is initialized to 1 (true), and i is the loop counter starting from 2.

Start of do-while loop (do {): The do keyword starts the loop.

Check if divisible (if (n % i == 0) { ... }): Checks if n is divisible by i.

Set isPrime (isPrime = 0;): Sets isPrime to 0 (false) if n is divisible by i.

Exit the loop (break;): Exits the loop since n is not a prime number.

Increment counter (i++;): Increments the loop counter i by 1.

Condition check (} while (i <= n/2);): Continues the loop until i is greater than n/2, optimizing the check for prime numbers.

Check prime (if (isPrime)): Checks if isPrime is true (1).

Print result (printf("%d is a prime number.\n", n); or printf("%d is not a prime number.\n", n);): Prints whether the number is prime or not.

End of program (return 0;): The main function returns 0 to indicate successful execution.




Output:


17 is a prime number.

