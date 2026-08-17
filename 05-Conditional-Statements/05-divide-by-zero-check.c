#include <stdio.h>

int main(void)
{
    double a, b;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (b == 0.0)
    {
        printf("Cannot divide by zero.\n");
        return 0;
    }

    printf("Result = %f\n", a / b);

    return 0;
}
