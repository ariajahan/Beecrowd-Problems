
#include <stdio.h>

int main(void)
{
int code1, qty1, code2, qty2;
double price1, price2;
double total;
scanf("%d %d %lf", &code1, &qty1, &price1);
scanf("%d %d %lf", &code2, &qty2, &price2);
total = qty1 * price1 + qty2 * price2;
printf("VALOR A PAGAR: R$ %.2f\n", total);
return 0;
}
