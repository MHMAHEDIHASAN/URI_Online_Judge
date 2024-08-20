#include<stdio.h>
int main()
{
    int code1,unit1,code2,unit2;
    double price1,price2,Total;
    scanf("%d%d%lf",&code1,&unit1,&price1);
    scanf("%d%d%lf",&code2,&unit2,&price2);
    Total=(unit1*price1)+(unit2*price2);
    printf("VALOR A PAGAR: R$ %.2lf\n",Total );
    return 0;
}
