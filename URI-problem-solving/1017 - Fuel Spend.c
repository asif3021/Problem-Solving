#include <stdio.h>
int main()
{
    int a,b;
    double d;
    while(scanf("%d%d",&a,&b)==2){
        d=a*b;
        d=d/12;
        printf("%.3lf\n",d);
    }
    return 0;
}
