
#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        if(n == 0) {
            printf("0\n");
            continue;
        }
        while(n > 0) {
            printf("%d", n % 10);
            n /= 10;
            if(n > 0) printf(" ");
        }
        printf("\n");
    }
    return 0;
}
