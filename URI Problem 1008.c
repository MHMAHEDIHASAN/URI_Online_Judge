#include<stdio.h>
int main()
{
    int NUMBER,HOURS;
    double  SALARY_PER_HOURS,SALARY;
    scanf("%d%d%lf",&NUMBER,&HOURS,&SALARY_PER_HOURS);
    SALARY= HOURS *SALARY_PER_HOURS  ;
    printf("NUMBER = %d\n",NUMBER);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
