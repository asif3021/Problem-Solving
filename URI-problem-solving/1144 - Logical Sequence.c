#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)==1){
            if(n>1&&n<1000)
        for(i=1;i<=n;i++){
            j=i*i;
            k=i*j;
            printf("%d %d %d\n",i,j,k);
            j=j+1;
            k=k+1;
            printf("%d %d %d\n",i,j,k);
            }
    }

    return 0;
}


