#include <stdio.h>

int main()
{
    int num1, num2,add, sub,mul,div;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    
    add= *ptr1+*ptr2;
    sub = *ptr1 - *ptr2;
    mul= *ptr1 * *ptr2;
    div= *ptr1 / *ptr2;

    printf("\nadd,\nsub,\nmul,\ndiv \n%d \n%d,\n%d,\n%f",add, sub,mul,div);

    return 0;
}
