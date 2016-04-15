#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    double a,b,c,d,e,f,g;
    while(scanf("%lf%lf%lf",&a,&b,&c)==3){
        if(a==0){
            printf("Impossivel calcular\n");
        }
        else{
            d=((b*b)-(4*a*c));
            if(d<0){
            printf("Impossivel calcular\n");
            }
            else{
                e=sqrt(d);
                f=((-(b))+e)/(2*a);
                printf("R1 = %0.5lf\n",f);
                f=((-(b))-e)/(2*a);
                printf("R2 = %0.5lf\n",f);
            }
        }
    }
    return 0;
    }
