#include <stdio.h>
int main() {
    int n, x, max = -1000000;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &x);
        if(x > max) max = x;
    }
    printf("%d\n", max);
    return 0;
}
