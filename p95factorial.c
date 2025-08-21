#include <stdio.h>

int main() {
    int i,n;
    unsigned long long fact = 1;

    printf("Enter number = ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number is not defined.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %llu\n", n, fact);
    return 0;
}

