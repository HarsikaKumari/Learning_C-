#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0;

    printf("enter the length of array you want: ");
    scanf("%d", &n);

    float arrayNum[n];
    printf("enter the elements of array arrayNum: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &arrayNum[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += arrayNum[i];
    }
    printf("The sum of the element is %.2f \n", sum);
    printf("The average of the element is %.2f", sum / n);

    return 0;
}