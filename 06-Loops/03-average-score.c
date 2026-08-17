#include <stdio.h>

int main(void)
{
    int i;
    int subjects;
    int score;
    double sum = 0.0;

    printf("Number of subjects: ");
    scanf("%d", &subjects);

    for (i = 1; i <= subjects; i++)
    {
        printf("Subject %d: ", i);
        scanf("%d", &score);
        sum += score;
    }

    printf("Average = %.2f\n", sum / subjects);

    return 0;
}
