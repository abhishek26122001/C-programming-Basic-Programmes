#include <stdio.h>

int main()
{
    int num1, num2, sub;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);

    sub = *ptr1 - *ptr2;

    printf("sub = %d", sub);

    return 0;
}
