#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int x = a, y = b, z = c;
    if (x > y) {
int t = x; x = y; y = t;
}
    if (y > z) {
int t = y; y = z; z = t;
}
    if (x > y) {
int t = x; x = y; y = t;
}
    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}
