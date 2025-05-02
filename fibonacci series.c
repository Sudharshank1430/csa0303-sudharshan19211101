#include <stdio.h>

int fibonacciRecursive(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

void fibonacciIterative(int n) {
    int a = 0, b = 1, next;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
}

int main() {
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    if (num < 0)
        printf("Invalid input.\n");
    else {
        printf("Fibonacci series (recursive): ");
        for (int i = 0; i < num; i++)
            printf("%d ", fibonacciRecursive(i));
        printf("\nFibonacci series (iterative): ");
        fibonacciIterative(num);
    }
    return 0;
}
