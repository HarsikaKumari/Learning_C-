#include <stdio.h>
int main()
{
    int *ptr, a[60], i, x, length;
    printf("\nEnter the length of your array:");
    scanf("%d", &length);
    printf("\nEnter the array index of which you want adress:");
    scanf("%d", &x);
    printf("\nEnter the Elements of your array: ");
    for (i = 0; i < length; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nyour Array is:");
    for(i = 0; i < length; i++){
         printf("%d\n",a[i]); 
    }
    ptr = &a[x-1];
     printf("\nThe value of that index is: %d", *ptr);
     printf("\nThe adress you want asked for is: %d", ptr);
    return 0;
}
