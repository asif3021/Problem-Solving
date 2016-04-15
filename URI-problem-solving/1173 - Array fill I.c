#include <stdio.h>
int main()
{
    int a[10],n,i,j;
    while(scanf("%d",&n)==1){
        for(i=0;i<10;i++){
                if(i==0){
            a[i]=n;
                }
                else {
                    n=n*2;
                    a[i]=n;
                }
        }
        for(i=0;i<10;i++){
            printf("N[%d] = %d\n",i,a[i]);
        }
    }
    return 0;
}
