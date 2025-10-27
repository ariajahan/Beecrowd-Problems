#include <stdio.h>
int main() {
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    int total = 0;
    for(int i = 1; i <= n; i++) {
        int sum = 0, x = i;
        while(x > 0) {
            sum += x % 10;
            x /= 10;
        }
        if(sum >= a && sum <= b)
            total += i;
    }
    printf("%d\n", total);
    return 0;
}
