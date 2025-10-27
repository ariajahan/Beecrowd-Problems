#include <stdio.h>
int main(void)
{
int distance;
double fuel;
double consumption;
scanf("%d %lf", &distance, &fuel);
consumption = distance / fuel;
printf("%.3f km/l\n", consumption);
return 0;
}
