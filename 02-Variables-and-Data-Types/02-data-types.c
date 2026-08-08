#include <stdio.h>

int main(void)
{
    char ch = 'A';
    short sh = 10;
    int i = 100;
    long lo = 1000L;
    float fl = 3.14f;
    double du = 3.141592;

    printf("char   : %c\n", ch);
    printf("short  : %hd\n", sh);
    printf("int    : %d\n", i);
    printf("long   : %ld\n", lo);
    printf("float  : %f\n", fl);
    printf("double : %f\n", du);

    return 0;
}
