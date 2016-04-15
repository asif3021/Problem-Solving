#include <stdio.h>
int main()
{
    int a[20],i,n,j;
    while(scanf("%d",&a[0])==1){
        for(i=1;i<20;i++){
            scanf("%d",&a[i]);
        }
        for(i=19,j=0;i>=0;i--,j++){
            printf("N[%d] = %d\n",j,a[i]);
        }
    }
    return 0;
}
