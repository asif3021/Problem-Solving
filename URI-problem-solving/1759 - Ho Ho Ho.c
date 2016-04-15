#include <stdio.h>
int main()
{
    int a,n,i,j;
    while(scanf("%d",&n)==1){
        if(n>=0&&n<=1000000){
            for(i=0;i<n;i++){
                if(i!=n-1){
                    printf("Ho ");
                }
                else{
                    printf("Ho");
                }
            }
        }
        printf("!\n");
    }
    return 0;
}

