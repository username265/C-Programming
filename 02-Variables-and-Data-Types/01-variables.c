#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = a;
    float c = 111.1f;
    float d = c;

    printf("a, b = %d, %d\n", a, b);
    printf("c, d = %.1f, %.1f\n", c, d);

    return 0;
}
