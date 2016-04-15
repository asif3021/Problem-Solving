#include <stdio.h>
int main()
{
    long int n,m,i,k=1,s=0;
    scanf("%ld",&n);
    if(n>=1&&n<=100){
            while(k<=n){
        scanf("%ld",&m);
        if(m>=1&&m<=100000000){
            for(i=1;i<m;i++){
                    if(m%i==0){
                    s=s+i;
                    }
                }
            }
            if(s==m){
                printf("%ld eh perfeito\n",m);
            }
                else{
                    printf("%ld nao eh perfeito\n",m);
                }
               k++;
               s=0;
    }
    }
    return 0;
}
