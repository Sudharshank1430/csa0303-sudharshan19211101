#include <stdio.h>

long long factorialRecursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorialRecursive(n - 1);
}

long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Factorial is not defined for negative numbers.\n");
    else {
        printf("Factorial of %d (recursive): %lld\n", num, factorialRecursive(num));
        printf("Factorial of %d (iterative): %lld\n", num, factorialIterative(num));
    }
    return 0;
}
