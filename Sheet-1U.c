#include <stdio.h>
#include <math.h>

int main() {
    double N;
    scanf("%lf", &N);

    int intPart = (int)N;

    if (N == intPart) {
        printf("int %d\n", intPart);
    } else {
        double decimalPart = N - intPart;
        printf("float %d %.3lf\n", intPart, decimalPart);
    }

    return 0;
}

