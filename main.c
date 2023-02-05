#include <stdio.h>
int iterative_fib(int n) {
    int f[n+1];
    int i;
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for (i = 3; i <= n; i++)
        f[i] = f[i-3] + f[i-2];
    return f[n];
}
int dp_fib(int n) {
    int f[n+1];
    int i;
    f[0] = 0;
    f[1] = 1;
    f[2] = 2;
    for (i = 3; i <= n; i++)
        f[i] = f[i-3] + f[i-2];
    return f[n];
}

int recursive_fib(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return recursive_fib(n-3) + recursive_fib(n-2);
}

int main() {
    int n = 2;
    printf("%d \n", iterative_fib(n));
    printf("%d \n", recursive_fib(n));
    printf("%d \n", dp_fib(n));
}
