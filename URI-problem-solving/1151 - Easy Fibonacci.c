#include <stdio.h>
int main()
{
    int x=0,y=1,z=0,j,n;
    while(scanf("%d",&n)==1){
            if(n>0&&n<46){
        for(j=0;j<n;j++){
                printf("%d",x);
                if(j!=n-1){
                printf(" ");
                }
                x=y+z;
                y=z;
                z=x;
            }
                printf("\n");
            x=0;
            y=1;
            z=0;
            }
    }
    return 0;
}
