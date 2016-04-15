#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double k;
    int m=1,n;
    while(scanf("%d",&n)==1){
            if(n>5&&n<2000){
        while(m<=n){
            if(m%2==0){
                    k=m*m;
                printf("%d^2 = %.0lf\n",m,k);
            }
            m++;
        }
        m=1;
    }
    }
    return 0;
}
