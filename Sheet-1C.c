#include <stdio.h>

int main() {
    int x, y, sum, mul, sub;

    scanf("%d %d", &x, &y);

    sum = x + y;
    mul = x * y;
    sub = x - y;

    printf("Sum = %d\n", sum);
    printf("Multiplication = %d\n", mul);
    printf("Subtraction = %d\n", sub);

    return 0;
}
