
#include <stdio.h>
int main()
{
double n, sum = 0;
int count = 0;
for (int i = 0; i < 6; i++)
{
scanf("%lf", &n);
if (n > 0) {
sum += n;
count++;
}
}
printf("%d valores positivos\n", count);
printf("%.1lf\n", sum / count);
return 0;
}
