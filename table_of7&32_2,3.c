#include <stdio.h>

int main() {
    int number = 7;
    int limit = 10; // You can change this limit to display a different range

    printf("Table of %d:\n", number);
    for (int i = 1; i <= limit; ++i) {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int number, reversed = 0, digit, original;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    // Reversing the digits
    for (; number != 0; number = number / 10) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
    }

    printf("Reverse digits of %d are: ", original);

    // Displaying the reversed digits
    for (; reversed != 0; reversed = reversed / 10) {
        digit = reversed % 10;
        printf("%d, ", digit);
    }

    return 0;
}



