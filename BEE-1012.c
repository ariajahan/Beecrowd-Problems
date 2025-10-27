#include<stdio.h>
int main()
{
    float A,B,C,area;
    double pi=3.14159;
    scanf("%f %f %f",&A,&B,&C);

    area=0.5*A*C;
    printf("TRIANGULO: %.3f\n",area);

    area=pi*C*C;
    printf("CIRCULO: %.3f\n",area);

    area=0.5*(A+B)*C;
    printf("TRAPEZIO: %.3f\n",area);

    area=B*B;
    printf("QUADRADO: %.3f\n",area);

    area=A*B;
    printf("RETANGULO: %.3f\n",area);
}
