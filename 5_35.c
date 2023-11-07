#include <stdio.h>
#include <stdlib.h>

unsigned long long int fibonacci(unsigned int n) {
    unsigned long long int a = 0, b = 1, c;
    if (n == 0) return 0;
    for (unsigned int i = 2; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    for (unsigned int i = 0; i < 94; ++i) {
        printf("%u: %llu\n", i, fibonacci(i));
    }
    return 0;
}
