#include<stdio.h>
int main()
{   float a,s,m;
    int p;
    char c ='%';
    scanf("%f",&a);
  if(a>=0.00 &&  a<=400.00)
  { m=a*15 /100;
    s=a+m;
    p=15;
  }
  if(a>=400.01 &&  a<=800.00)
  { m=a*12/100;
    s=a+m;
    p=12;
  }
   else if(a>=400.01 &&  a<=800.00)
  { m=a*12/100;
    s=a+m;
    p=12;
  }
    else if(a>=800.01 &&  a<=1200.00)
  { m=a*10/100;
    s=a+m;
    p=10;
  }
    else if(a>= 1200.01 &&  a<=2000.00)
  { m=a*7/100;
    s=a+m;
    p=7;
  }
   else if(a>=2000.00)
  { m=a*4/100;
    s=a+m;
    p=4;
  }
 printf("Novo salario: %.2f\n",a+m);
 printf("Reajuste ganho: %.2f\n",m);
 printf("Em percentual: %d %c\n",p,c);
 return 0;

}
