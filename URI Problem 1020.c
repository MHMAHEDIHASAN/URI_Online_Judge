#include<stdio.h>
int main()
{
    int days,months,years;
    scanf("%d",&days);
    years = 0;
    months= 0;
    years=days/365;
    days=days%365;
    months=days/30;
    days=days%30;
    printf("%d ano(s)\n",years);
    printf("%d mes(es)\n",months);
    printf("%d dia(s)\n",days);
    return 0;

}
