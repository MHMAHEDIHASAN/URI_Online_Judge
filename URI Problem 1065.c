#include<stdio.h>
int main()
{
    int i,a=0,n;
    for(i=1;i<=5;i++)
        {
        scanf("%d",&n);
        if(n%2==0)
            a++;
        }
    printf("%d valores pares\n",a);
    return 0;
}
