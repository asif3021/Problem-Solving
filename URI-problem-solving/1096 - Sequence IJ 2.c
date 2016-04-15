#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i,j,m=1;
    while(m<10){
    for(i=m,j=7;j>=5;j--){
        printf("I=%d J=%d\n",i,j);
    }
        m+=2;
    }
    return 0;
}
