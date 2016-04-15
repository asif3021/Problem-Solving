#include <stdio.h>
int main()
{
    int a,b,n=0,i;
    while(scanf("%d%d",&a,&b)==2){
        for(i=a+1;i<=24;i++){
            n++;
        }
        for(i=1;i<=b;i++){
            n++;
        }
        if(n<=24){
            printf("O JOGO DUROU %d HORA(S)\n",n);
        }
        n=0;
    }
    return 0;
}
