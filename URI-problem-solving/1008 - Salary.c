#include <stdio.h>
int main()
{
    int a,b;
    float d,s;
    while(scanf("%d%d",&a,&b)==2){
        scanf("%f",&d);
        s=b*d;
        printf("NUMBER = %d\nSALARY = U$ %.2f\n",a,s);
    }

    return 0;
}
