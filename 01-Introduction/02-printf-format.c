#include <stdio.h>

int main(void)
{
    int number = 123;
    float pi = 3.14f;
    char ch = 'A';
    char text[] = "Hello";

    printf("decimal : %d\n", number);
    printf("hex     : %x\n", number);
    printf("octal   : %o\n", number);
    printf("float   : %.2f\n", pi);
    printf("char    : %c\n", ch);
    printf("string  : %s\n", text);

    return 0;
}
