#include<stdio.h>
int main()
{
    int n,i;
    float a,b,c,sum,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f %f",&a,&b,&c);
        sum=a*2+b*3+c*5;
        avg=sum/(2+3+5);
        printf("%.1f\n",avg);
    }

    return 0;
}
