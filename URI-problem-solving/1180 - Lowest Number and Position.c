#include <stdio.h>
int main()
{
    int a[1000],i,n,m=0,p;
        scanf("%d",&n);
        if(n>1&&n<1000){
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(m>a[i]){
                m=a[i];
                p=i;
            }
        }
        printf("Menor valor: %d\nPosicao: %d\n",m,p);
        }
    return 0;
}

