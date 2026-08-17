#include <stdio.h>

int main(void)
{
    double lb;

    printf("Weight (lb): ");
    scanf("%lf", &lb);

    printf("%.2f lb = %.2f kg\n", lb, lb / 2.205);

    return 0;
}
