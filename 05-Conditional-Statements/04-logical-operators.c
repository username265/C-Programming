#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number >= 10 && number < 20)
    {
        printf("%d is in [10, 20).\n", number);
    }

    return 0;
}
