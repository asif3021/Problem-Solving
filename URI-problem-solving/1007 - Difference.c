#include <stdio.h>
int main()
{
    int a,b,c,d,r;
    while(scanf("%d%d",&a,&b)==2){
        scanf("%d%d",&c,&d);
        r=(a*b)-(c*d);
        printf("DIFERENCA = %d\n",r);
    }
    return 0;
}
