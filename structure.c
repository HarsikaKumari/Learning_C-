#include <stdio.h>
struct student
{
    int studentNum;
    char studentName;
    float studentFee;
};
int main()
{
    struct student s1;

    printf("Enter the number of the student: \n");
    scanf("%d", s1.studentNum);
    printf("Enter the name of the student: \n");
    scanf("%c", s1.studentName);
    printf("Enter the fee of the student: \n");
    scanf("%f", s1.studentFee);

    printf("The number of student is: %d\n", s1.studentName);
    printf("The name of student is: %c\n", s1.studentName);
    printf("The  fee of student is: %f\n", s1.studentFee);
    return 0;
}