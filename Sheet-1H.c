#include <stdio.h>
#include <math.h>
int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int floorResult = A / B;

    int ceilResult = floorResult;
    if (A % B != 0) {
        ceilResult = floorResult + 1;
    }

    int roundResult = floorResult;
    if ((A % B) * 2 >= B) {
        roundResult = floorResult + 1;
    }

    printf("floor %d / %d = %d\n", A, B, floorResult);
    printf("ceil %d / %d = %d\n", A, B, ceilResult);
    printf("round %d / %d = %d\n", A, B, roundResult);

    return 0;
}
