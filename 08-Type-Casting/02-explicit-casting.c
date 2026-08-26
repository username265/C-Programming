#include <stdio.h>

int main(void)
{
    double value = 2.4;
    int integer = (int)value;

    printf("original = %f\n", value);
    printf("casted   = %d\n", integer);

    return 0;
}
