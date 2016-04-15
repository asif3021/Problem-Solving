#include <stdio.h>
int main()
{
    int a,n,i;
    while(scanf("%d",&n)==1){
        if(n<1000){
            for(i=2;i<10000;i++){
                    a=i%n;
                if(a==2){
                    printf("%d\n",i);
                }
            }
        }
    }
    return 0;
}
