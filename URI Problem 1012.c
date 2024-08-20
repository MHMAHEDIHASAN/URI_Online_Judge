#include<stdio.h>
#define pi  3.14159
int main()
{
    double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    scanf("%lf%lf%lf",&A,&B,&C);

    TRIANGULO=(0.5*A*C);
    CIRCULO=(pi*C*C);
    TRAPEZIO=(0.5*(A+B)*C);
    QUADRADO=(B*B);
    RETANGULO=(A*B);

    printf("TRIANGULO: %.3lf\n",TRIANGULO);
    printf("CIRCULO: %.3lf\n",CIRCULO);
    printf("TRAPEZIO: %.3lf\n",TRAPEZIO);
    printf("QUADRADO: %.3lf\n",QUADRADO);
    printf("RETANGULO: %.3lf\n",RETANGULO);

    return 0;
}
