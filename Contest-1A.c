#include <stdio.h>

int main() {
    double X, P;
    double original_price;

    scanf("%lf %lf", &X, &P);

    original_price = P / (1 - X / 100);

    printf("%.2lf", original_price);

    return 0;
}
