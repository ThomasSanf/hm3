
#include <stdio.h>
#include <stdlib.h>

double Power(double, int);
void main()
{
    int k;
    double Ans;
    printf("算計3.5的k次方？講論入k=");
    scanf("%d", &k);
    Ans = Power(3.5, k);
    printf("3.5的%d次方=%f\n", k, Ans);
    system("pause");
}

double Power(double X, int n)
{
    int i;
    double PowerXn = 1;
    for(i = 1; i <= n; i++)
        PowerXn = PowerXn * X;
    return PowerXn;
}
