#include <stdio.h>
int main()
{
    int n,m=1,i;
    while(scanf("%d",&n)==1){
        for(i=n;i>=1;i--){
            m=m*i;
        }
        printf("%d\n",m);
        m=1;
    }
    return 0;
}
