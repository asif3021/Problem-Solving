#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,y,n,i,j,k=1,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
            scanf("%d%d",&x,&y);
    for(j=x;k<=y;j++){
        if(j%2==0){
                continue;
        }
        else{
            s=s+j;
            k++;
        }
    }
    printf("%d\n",s);
    s=0;
    k=1;
    }
    return 0;
}
