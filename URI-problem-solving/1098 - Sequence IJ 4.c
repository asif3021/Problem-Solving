#include <stdio.h>
int main()
{
    int a=0,b,s,j;
    double d,m,n,i;
    while(a<=20){
        for(i=a,j=1;j<=3;j++){
            if(i==0||i==10||i==20){
                s=(i/10)+j;
                b=i/10;
                printf("I=%d J=%d\n",b,s);
            }
            else{
                d=(i/10)+j;
                n=(i/10);
                printf("I=%.1lf J=%.1lf\n",n,d);
            }
        }
        a+=2;
    }
    return 0;
}
