#include <stdio.h>
int main()
{
    int a=1,n,i,j;
    while(scanf("%d",&n)==1){
        for(i=0;i<n;i++){
            for(j=a;j<a+3;j++){
                printf("%d ",j);
            }
            a=a+4;
            printf("PUM\n");
        }
        a=1;
    }
    return 0;
}
