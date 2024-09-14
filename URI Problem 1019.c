#include<stdio.h>
int main()
{   int H,M,S;
    scanf("%d",&S);
    H=0;
    M=0;
    H=S/3600;
    S=S%3600;
    M=S/60;
    S=S%60;

      printf("%d:%d:%d\n",H,M,S);
    return 0;
}
