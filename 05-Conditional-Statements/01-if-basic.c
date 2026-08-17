#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 7)
    {
        printf("Lucky number 7!\n");
    }

    return 0;
}
