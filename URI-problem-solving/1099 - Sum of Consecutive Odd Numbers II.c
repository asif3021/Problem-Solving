#include <stdio.h>
int main()
{
    int n,x,y,i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        if(x>y){
            for(j=y+1;j<x;j++){
                if(j%2==1){
                    s=s+j;
                }
            }
        }
        else{
            for(j=x+1;j<y;j++){
                if(j%2==1){
                    s=s+j;
                }
            }

        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
