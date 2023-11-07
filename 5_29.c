#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main() {
    int num1, num2, lcmResult;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    lcmResult = lcm(num1, num2);

    printf("The Least Common Multiple of %d and %d is %d.\n", num1, num2, lcmResult);

    return 0;
}
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
int lcm(int a, int b) {
    int product = abs(a * b);
    return product / gcd(a, b); 
}
