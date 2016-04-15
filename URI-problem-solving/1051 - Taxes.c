#include <stdio.h>
int main()
{
    float a,b,c,d,e;
    while(scanf("%f",&a)==1){
        if(a>=0&&a<=2000.00){
            printf("Isento\n");
        }
        else if(a>=2000.01&&a<=3000.00){
            b=a-2000.00;
            d=((b*8)/100);
            printf("R$ %.2f\n",d);
        }
        else if(a>=3000.01&&a<=4500.00){
            b=a-2000.00;
            c=b-1000.00;
            d=((1000*8)/100)+((c*18)/100);
            printf("R$ %.2f\n",d);
        }
        else if(a>4500.00){
            b=a-2000.00;
            c=b-1000.00;
            e=c-1500.00;
            d=((1000*8)/100)+((1500*18)/100)+((e*28)/100);
            printf("R$ %.2f\n",d);
        }
    }
    return 0;
}
