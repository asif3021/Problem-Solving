#include <stdio.h>
int main()
{
    int n,i,j,a[1000],b[50],k=0;
    while(scanf("%d",&n)==1){
        if(n>=2&&n<=50){
            for(i=0;i<n;i++){
                b[i]=i;
                k++;
            }
            for(i=0,j=0;i<1000;i++,j++){
                if(j==k){
                    j=0;
                }
                a[i]=b[j];
            }
            for(i=0;i<1000;i++){
                printf("N[%d] = %d\n",i,a[i]);
            }
        }
    }
    return 0;
}
