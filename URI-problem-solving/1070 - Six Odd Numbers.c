#include <stdio.h>
int main()
{
    int i=1,n;
    while(scanf("%d",&n)==1){
        while(i<=6){
            if(n%2==1){
                printf("%d\n",n);
                i++;
            }
            n++;
        }
        i=1;
    }
    return 0;
}
