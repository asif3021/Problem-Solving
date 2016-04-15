#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    float i,j,m=0,k=1;
    int a;
    while(m<=2.2){
    for(i=m,j=k;k<=3;j++,k++){
            if(k==1){
            j+=m;
            }
            a=i;
            if(a==1||(a==2)||a==0){
        printf("I=%0.0f J=%0.0f\n",i,j);
        }
    else{
        printf("I=%.1f J=%.1f\n",i,j);
        }
    }
        m+=0.2;
        k=1;
    }
    return 0;
}
