#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,n,m;
    while(scanf("%d",&n)==1){
            if(0<n&&n<1000000){
                    m=n;
        while(n>=100){
            n=n-100;
            b++;
        }
        while(n<100&&n>=50){
            n=n-50;
            c++;
        }
        while(n<50&&n>=20){
            n=n-20;
            d++;
        }
        while(n<20&&n>=10){
            n=n-10;
            e++;
        }
        while(n<10&&n>=5){
            n=n-5;
            f++;
        }
        while(n<5&&n>=2){
            n=n-2;
            g++;
        }
        while(n<2&&n>=1){
            n=n-1;
            h++;
        }
        printf("%d\n",m);
        printf("%d nota(s) de R$ 100,00\n",b);
        printf("%d nota(s) de R$ 50,00\n",c);
        printf("%d nota(s) de R$ 20,00\n",d);
        printf("%d nota(s) de R$ 10,00\n",e);
        printf("%d nota(s) de R$ 5,00\n",f);
        printf("%d nota(s) de R$ 2,00\n",g);
        printf("%d nota(s) de R$ 1,00\n",h);
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;
        h=0;
    }
    }
    return 0;
}
