#include <stdio.h>

int main() {
    long long A, B, C, D;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);

    long long result = A * B * C * D;
    result = result % 100;
    printf("%lld\n", result);
    return 0;
}
