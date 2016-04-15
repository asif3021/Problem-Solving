#include <stdio.h>
int main()
{
    int a;
    float c,d;
    while(scanf("%d%f",&a,&c)==2){
        d=a/c;
        printf("%.3f km/l\n",d);
    }
    return 0;
}
