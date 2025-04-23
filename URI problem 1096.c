#include <stdio.h>

int main()
{
    int I,J;
    for(I=1;I<=9;I=I+2)
    {
        for(J=7;J>=5;J--)
            printf ("I=%d J=%d\n",I,J);
    }
    return 0;
}
