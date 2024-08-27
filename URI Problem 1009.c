#include<stdio.h>
int main()
{   char  employees_first_name[30];
    double sellers_salary,total_value_sold,TOTAL;

    gets( employees_first_name);
    scanf("%lf%lf",&sellers_salary,&total_value_sold);

    TOTAL=sellers_salary +(0.15*total_value_sold);
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
