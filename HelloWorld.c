#include<stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c;

    printf("a=%d b=%d", a, b);

    c = a;
    a = b;
    b = c;

    printf("\n");
    printf("a=%d b=%d", a, b);

    return 0;
}
