#include <stdio.h>
int main()
{
    double n;
    int i;
    scanf("%lf",&n);
    for(i=0;i<100;i++){
        printf("N[%d] = %0.4lf\n",i,n);
        n=n/2;
    }
    return ;
}
