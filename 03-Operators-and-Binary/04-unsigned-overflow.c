#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned int value = UINT_MAX;

    printf("before = %u\n", value);
    value++;
    printf("after  = %u\n", value);

    return 0;
}
