#include<stdio.h>
int main()
{
    int s,e;
    scanf("%d %d",&s,&e);
    if (s==e)printf("O JOGO DUROU 24 HORA(S)\n");
    else if(e>s)printf("O JOGO DUROU %d HORA(S)\n",e-s);
    else if(s>e)printf("O JOGO DUROU %d HORA(S)\n",(e+24)-s);
    return 0;
}
