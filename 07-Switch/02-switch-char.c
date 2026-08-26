#include <stdio.h>

int main(void)
{
    char input;

    printf("Enter a lowercase letter (a-c): ");
    scanf(" %c", &input);

    switch (input)
    {
        case 'a':
            printf("A\n");
            break;

        case 'b':
            printf("B\n");
            break;

        case 'c':
            printf("C\n");
            break;

        default:
            printf("Unsupported letter\n");
            break;
    }

    return 0;
}
