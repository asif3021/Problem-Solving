#include <stdio.h>
int main()
{
    int n,i,j,a,b=1;
    while(scanf("%d",&n)==1){
        for(i=1;i<=n;i++){
            for(j=i;j<i+2;j++){
                if(b==1){
                    printf("%d ",j);
                    b++;
                }
                else if(b==2){
                        a=i*i;
                    printf("%d ",a);
                    b++;
                }
                if(b==3){
                    a=i*i*i;
                    printf("%d",a);
                    b=1;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
