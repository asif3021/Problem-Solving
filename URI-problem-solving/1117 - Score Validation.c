#include <stdio.h>
int main()
{
    int b=0;
    float a,m;
    while(scanf("%f",&m)==1){
        if(m>0&&m<=10){
            a=a+m;
            b++;
            if(b==2){
                    a=a/2;
                printf("media = %.2f\n",a);
                break;
            }
        }
        else{
            printf("nota invalida\n");
        }
    }
    return 0;
}
