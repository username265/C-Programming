#include <stdio.h>

int main(void)
{
    int answer;

    printf("Guess the number: ");

    for (;;)
    {
        scanf("%d", &answer);

        if (answer == 3)
        {
            printf("Correct!\n");
            break;
        }

        printf("Wrong. Try again: ");
    }

    return 0;
}
