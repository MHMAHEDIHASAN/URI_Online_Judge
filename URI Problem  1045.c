#include<stdio.h>
int main()
{
    double A,B,C,i,j,k,temp;
    scanf("%lf %lf %lf",&A,&B,&C);
    if(A<B)
    {
        temp=A;
        A=B;
        B=temp;
    }
    if(A<C)
    {
        temp=A;
        A=C;
        C=temp;
    }
    if(B<C)
    {
        temp=B;
        B=C;
        C=temp;
    }
    i=A*A;
    j=B*B;
    k=C*C;
    if (A >= B + C)
        printf("NAO FORMA TRIANGULO\n");
    else
    {
        if( i == j + k)
            printf("TRIANGULO RETANGULO\n") ;

        if (i > j + k)
            printf("TRIANGULO OBTUSANGULO\n") ;
        if( i < j + k)
            printf("TRIANGULO ACUTANGULO\n") ;
        if (A==B && B==C)
            printf("TRIANGULO EQUILATERO\n") ;
        else if (A==B ||B==C || C==A)
            printf("TRIANGULO ISOSCELES\n") ;
    }


    return 0;
}
