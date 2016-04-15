#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i,j,m=1,k=7;
    while(m<10){
    for(i=m,j=k;j>k-3;j--){
        printf("I=%d J=%d\n",i,j);
    }
        m+=2;
        k+=2;
    }
    return 0;
}
