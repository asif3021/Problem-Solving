#include <stdio.h>
int main()
{
    int x,y,i,m=1;
    while(scanf("%d%d",&x,&y)==2){
            if((1<x&&x<20)&&(x<y&&y<100000)){
        while(m<y){
            for(i=0;i<x;i++){
                printf("%d",m);
                if(i!=x-1){
                printf(" ");
                }
                m++;
                    }
            printf("\n");
            }
        m=1;
            }
    }
    return 0;
}
