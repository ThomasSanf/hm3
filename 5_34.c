#include <stdio.h>
#include <stdlib.h>

double power(double base, int exponent);

int main()
{
    double base;
    int exponent;
    double result;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter a non-negative integer exponent: ");
    scanf("%d", &exponent);
    result = power(base, exponent);

    printf("%.2lf to the power of %d is %.2lf\n", base, exponent, result);

    return 0;
}

double power(double base, int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    else if (exponent < 0)
    {
              printf("Can't be a negative exponent.\n");
        return 0;
    }
    else
    {
        return base * power(base, exponent - 1);
    }
}
