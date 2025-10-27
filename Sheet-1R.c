#include <stdio.h>
int main() {
    int days;
    scanf("%d", &days);
    printf("%d years\n", days / 365);
    days %= 365;
    printf("%d months\n", days / 30);
    days %= 30;
    printf("%d days\n", days);
    return 0;
}
