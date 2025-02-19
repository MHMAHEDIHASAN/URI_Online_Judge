#include <stdio.h>
int main()
{
    int x, a, i;

    int in = 0;
    int out = 0;

    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        scanf("%d", &a);
        if(a >= 10 && a <= 20){
            in++;
        }else{
            out++;
        }

    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
