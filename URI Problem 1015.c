#include<stdio.h>
#include<math.h>
int main()
{   
    double x1,x2,y1,y2,D;
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    D =sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4lf\n",D);
    return 0;
}
