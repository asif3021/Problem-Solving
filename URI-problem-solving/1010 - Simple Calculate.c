#include <stdio.h>
int main()
{
    int a,b,i=0;
    float s=0,c;
    while(scanf("%d%d",&a,&b)==2){
        scanf("%f",&c);
        s=s+(b*c);
        i++;
        if(i==2){
            printf("VALOR A PAGAR: R$ %.2f\n",s);
            s=0;
            i=0;
        }
    }
    return 0;
}
