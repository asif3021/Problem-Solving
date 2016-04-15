#include <stdio.h>
int main()
{
    double p,t;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,n=0,o=0,q=0;
    while(scanf("%lf",&t)==1){
        if(t>=0&&t<=1000000){
        while(t>=2){
            if(t>=100){
                t=t-100;
                a++;
            }
            else if(t<100&&t>=50){
                t=t-50;
                b++;
            }
            else if(t<50&&t>=20){
                t=t-20;
                c++;
            }
            else if(t<20&&t>=10){
                t=t-10;
                d++;
            }
            else if(t<10&&t>=5){
                t=t-5;
                e++;
            }
            else if(t<5&&t>=2){
                t=t-2;
                f++;
            }
            }
            while(t>=0.05){

            if(t<2&&t>=1){
                t=t-1;
                g++;
            }
            else if(t<1&&t>=0.50){
                t=t-0.50;
                h++;
            }
            else if(t<0.50&&t>=0.25){
                t=t-0.25;
                m++;
            }
            else if (t<0.25&&t>=0.10){
                t=t-0.10;
                n++;
            }
            else if(t<0.10&&t>=0.05){
                t=t-0.05;
                o++;
            }
            else {
                continue;
            }
            }
        }
            t=t*100;
        while(t>0){
            t=t-1;
            q++;
        }
        if(t<0){
            q--;
        }

        printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n",a);
        printf("%d nota(s) de R$ 50.00\n",b);
        printf("%d nota(s) de R$ 20.00\n",c);
        printf("%d nota(s) de R$ 10.00\n",d);
        printf("%d nota(s) de R$ 5.00\n",e);
        printf("%d nota(s) de R$ 2.00\n",f);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",g);
        printf("%d moeda(s) de R$ 0.50\n",h);
        printf("%d moeda(s) de R$ 0.25\n",m);
        printf("%d moeda(s) de R$ 0.10\n",n);
        printf("%d moeda(s) de R$ 0.05\n",o);
        printf("%d moeda(s) de R$ 0.01\n",q);
        a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,n=0,o=0,q=0;
    }
    return 0;
}

