#include <stdio.h>

int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    // Displaying numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping logic using a temporary variable
    temp = a;
    a = b;
    b = temp;

    // Displaying numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}


#include <stdio.h>

int main() {
    int number;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the number is divisible by both 2 and 5
    if (number % 2 == 0 && number % 5 == 0) {
        printf("%d is divisible by both 2 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 2 and 5.\n", number);
    }

    return 0;
}
