
#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int found = 0;
    for(int i = a; i <= b; i++) {
        int n = i, lucky = 1;
        while(n) {
            int d = n % 10;
            if(d != 4 && d != 7) {
                lucky = 0;
                break;
            }
            n /= 10;
        }
        if(lucky) {
            printf("%d ", i);
            found = 1;
        }
    }
    if(!found) printf("-1");
    return 0;
}
