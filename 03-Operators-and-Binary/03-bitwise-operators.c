#include <stdio.h>

int main(void)
{
    unsigned int a = 0xAF;
    unsigned int b = 0xB5;

    printf("a & b  = %X\n", a & b);
    printf("a | b  = %X\n", a | b);
    printf("a ^ b  = %X\n", a ^ b);
    printf("~a     = %X\n", ~a);
    printf("a << 2 = %X\n", a << 2);
    printf("b >> 3 = %X\n", b >> 3);

    return 0;
}
