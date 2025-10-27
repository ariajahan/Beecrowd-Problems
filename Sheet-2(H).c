#include <stdio.h>
int main() {
    int n, prime = 1;
    scanf("%d", &n);
    if(n <= 1) prime = 0;
    else {
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                prime = 0;
                break;
            }
        }
    }
    if(prime) printf("YES\n");
    else printf("NO\n");
    return 0;
}
