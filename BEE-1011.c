#include <stdio.h>
#include <math.h>

int main(void)
{
double R;
const double PI = 3.14159;
double volume;
scanf("%lf", &R);
volume = (4.0 / 3.0) * PI * R * R * R;
printf("VOLUME = %.3f\n", volume);
return 0;
}
