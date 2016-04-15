#include <stdio.h>
int main()
{
    float n,a,b;
    while(scanf("%f",&n)==1){
        if(n>=0&&n<=400){
                a=((n*15)/100);
                b=n+a;
            printf("Novo salario: %.2f\n",b);
            printf("Reajuste ganho: %.2f\n",a);
            printf("Em percentual: 15 %%\n");
        }
        if(n>=400.01&&n<=800){
                a=((n*12)/100);
                b=n+a;
            printf("Novo salario: %.2f\n",b);
            printf("Reajuste ganho: %.2f\n",a);
            printf("Em percentual: 12 %%\n");
        }
        if(n>=800.01&&n<=1200){
                a=((n*10)/100);
                b=n+a;
            printf("Novo salario: %.2f\n",b);
            printf("Reajuste ganho: %.2f\n",a);
            printf("Em percentual: 10 %%\n");
        }
        if(n>=1200.01&&n<=2000){
                a=((n*7)/100);
                b=n+a;
            printf("Novo salario: %.2f\n",b);
            printf("Reajuste ganho: %.2f\n",a);
            printf("Em percentual: 7 %%\n");
        }
        if(n>2000){
                a=((n*4)/100);
                b=n+a;
            printf("Novo salario: %.2f\n",b);
            printf("Reajuste ganho: %.2f\n",a);
            printf("Em percentual: 4 %%\n");
        }
    }
    return 0;
}
