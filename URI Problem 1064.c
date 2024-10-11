#include <stdio.h>
int main()
{
    double n, sum = 0, avg;
    int i, count = 0;
    for(i = 1; i <= 6; i++)
    {
        scanf("%lf", &n);
        if(n > 0)
        {
            sum += n;
            count++;
            avg = sum / count;
        }
    }
    printf("%d valores positivos\n%.1lf\n", count, avg);

    return 0;
}
