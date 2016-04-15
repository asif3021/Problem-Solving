#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m=1,n,k;
    while(scanf("%d",&n)==1){
            if(n>1&&n<1000){
                    while(m<=10){
                            k=m*n;
                        printf("%d x %d = %d\n",m,n,k);
                        m++;
                    }
                    m=1;
    }
    }
    return 0;
}
