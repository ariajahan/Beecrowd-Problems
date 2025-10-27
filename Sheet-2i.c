#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int reversed = 0;

    while (N > 0) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N /= 10;
    }

    printf("%d\n", reversed);

    if (original == reversed) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
