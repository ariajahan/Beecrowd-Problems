#include <stdio.h>
int main() {
    double n;
    scanf("%lf", &n);
    if (n < 0 || n > 100)
        printf("Out of Intervals\n");
    else if (n <= 25)
        printf("Interval [0,25]\n");
    else if (n <= 50)
        printf("Interval (25,50]\n");
    else if (n <= 75)
        printf("Interval (50,75]\n");
    else
        printf("Interval (75,100]\n");
    return 0;
}
