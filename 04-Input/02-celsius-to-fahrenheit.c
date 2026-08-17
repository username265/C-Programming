#include <stdio.h>

int main(void)
{
    double celsius;

    printf("Celsius: ");
    scanf("%lf", &celsius);

    printf("%.2f C = %.2f F\n",
           celsius, 9.0 * celsius / 5.0 + 32.0);

    return 0;
}
