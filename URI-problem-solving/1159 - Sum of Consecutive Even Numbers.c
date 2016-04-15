#include <stdio.h>
int main()
{
    int x,i,m=5,j,k=0,s=0;
    while(scanf("%d",&x)==1){
        if(x==0){
            break;
        }
        else if(x%2==0){
            for(i=x;k<m;i++){
                if(i%2==0){
                    s=s+i;
                    k++;
                }
            }
        }
        else{
            for(i=x+1;k<m;i++){
                if(i%2==0){
                    s=s+i;
                    k++;
                }
            }
        }
        printf("%d\n",s);
        s=0;
        k=0;
        m=5;
    }
    return 0;
}
