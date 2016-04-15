#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,g,h;
    float e,f;
    while(scanf("%d%d",&a,&b)==2){
        scanf("%d%d",&c,&d);
        g=a-c;
        h=b-d;
        e=(g*g)+(h*h);
        f=sqrt(e);
        printf("%.4f\n",f);
    }

    return 0;
}
