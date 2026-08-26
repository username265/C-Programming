#include <stdio.h>

int main(void)
{
    int input;

    printf("1. Feed\n");
    printf("2. Wash\n");
    printf("3. Sleep\n");
    printf("Select: ");
    scanf("%d", &input);

    switch (input)
    {
        case 1:
            printf("Feed\n");
            break;

        case 2:
            printf("Wash\n");
            break;

        case 3:
            printf("Sleep\n");
            break;

        default:
            printf("Unknown command\n");
            break;
    }

    return 0;
}
