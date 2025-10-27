#include <stdio.h>

int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);

    int lastDigitSum = (N % 10) + (M % 10);

    printf("%d\n", lastDigitSum);

    return 0;
}

