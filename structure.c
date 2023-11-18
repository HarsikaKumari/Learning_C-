#include <stdio.h>
#include<conio.h>
struct student
{
    int studentNum;
    char studentName[10];
    float studentFee;
};
int main()
{
    struct student s1;

    printf("Enter the number of the student: \n");
    scanf("%d", s1.studentNum);
    printf("Enter the name of the student: \n");
    for(int i = 0; i< 10; i++) {
    scanf("%c", s1.studentName);
    }
    printf("Enter the fee of the student: \n");
    scanf("%f", s1.studentFee);

    printf("The number of student is: %d\n", s1.studentNum);
    printf("The name of student is: %c\n", s1.studentName[10]);
    printf("The  fee of student is: %f\n", s1.studentFee);
    return 0;
}