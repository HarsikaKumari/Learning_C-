#include <stdio.h>

int main() {
    int numbers[10]; // Array to store 10 numbers
    int i, sum = 0;

    printf("Enter 10 numbers:\n");

    // Reading 10 numbers from the user and storing them in the array
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Adding each number to the sum as it's entered
    }

    printf("The sum of numbers in the array is: %d\n", sum);

    return 0;
}



#include <stdio.h>

int main() {
    int numbers[10]; // Array to store 10 numbers
    int i, count = 0;

    printf("Enter 10 numbers:\n");

    // Reading 10 numbers from the user and storing them in the array
    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Counting numbers divisible by 5
    for (i = 0; i < 10; i++) {
        if (numbers[i] % 5 == 0) {
            count++; // Increment count if the number is divisible by 5
        }
    }

    printf("The count of numbers divisible by 5 is: %d\n", count);

    return 0;
}
