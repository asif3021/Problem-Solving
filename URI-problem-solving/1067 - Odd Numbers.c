#include <stdio.h>
int main()
{
    int n,m=1;
    while(scanf("%d",&n)==1){
            if(n>=1&&n<=1000){
                while(m>=1&&m<=n){
                    if(m%2==1){
                        printf("%d\n",m);
                    }
                    m++;
                }
            }
            m=1;
    }
    return 0;
}
