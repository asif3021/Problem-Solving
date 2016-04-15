#include <stdio.h>
int main()
{
    int b=0,n=1;
    float a=0,m,r;
    while(n!=2){
            if(n==1){
    while(scanf("%f",&m)==1){
        if(m>0&&m<=10){
            a=a+m;
            b++;
            if(b==2){
                    r=a/2;
                printf("media = %.2f\n",r);
                    b=0;
                    a=0;
                    r=0;
                    break;
            }
        }
        else{
                printf("nota invalida\n");
        }
    }
            }
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&n);
    }
    return 0;
}
