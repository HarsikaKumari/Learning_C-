#include <stdio.h>

// Define a structure to hold book information
struct Book {
    char title[100];
    char author[100];
    int pages;
    float price;
};

int main() {
    struct Book book1; // Declare a variable of type Book

    // Read book information from the user
    printf("Enter book title: ");
    fgets(book1.title, sizeof(book1.title), stdin);

    printf("Enter book author: ");
    fgets(book1.author, sizeof(book1.author), stdin);

    printf("Enter number of pages: ");
    scanf("%d", &book1.pages);

    printf("Enter price: ");
    scanf("%f", &book1.price);

    // Display book information
    printf("\nBook Information:\n");
    printf("Title: %s", book1.title);
    printf("Author: %s", book1.author);
    printf("Number of pages: %d\n", book1.pages);
    printf("Price: $%.2f\n", book1.price);

    return 0;
}


#include <stdio.h>

#define MAX_STUDENTS 7

struct Student {
    char name[50];
    int age;
    char program[50];
    float cgpa;
};

int main() {
    struct Student students[MAX_STUDENTS];
    float totalCGPA = 0;

    // Reading information for 7 students
    printf("Enter information for %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter program name: ");
        scanf("%s", students[i].program);

        printf("Enter CGPA: ");
        scanf("%f", &students[i].cgpa);

        totalCGPA += students[i].cgpa;
    }

    // Displaying information of all students
    printf("\nInformation of %d students:\n", MAX_STUDENTS);
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Program: %s\n", students[i].program);
        printf("CGPA: %.2f\n", students[i].cgpa);
    }

    // Calculating average CGPA
    float averageCGPA = totalCGPA / MAX_STUDENTS;
    printf("\nAverage CGPA of %d students: %.2f\n", MAX_STUDENTS, averageCGPA);

    return 0;
}
