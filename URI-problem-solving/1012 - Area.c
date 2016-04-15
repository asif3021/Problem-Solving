#include <stdio.h>
int main()
{
    float a,b,c,d,e,f,g,h,s;
    while(scanf("%f%f",&a,&b)==2){
        scanf("%f",&c);
        d=(a*c)/2;
        e=3.14159*c*c;
        f=((a+b)/2)*c;
        g=b*b;
        h=a*b;
        printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n",d,e,f,g,h);
    }
    return 0;
}
