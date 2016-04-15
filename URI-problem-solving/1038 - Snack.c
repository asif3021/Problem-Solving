#include <stdio.h>
int main()
{
    int x,y;
    float r;
    while(scanf("%d%d",&x,&y)==2){
        if(x==1){
            r=y*4.00;
        }
        else if(x==2){
            r=y*4.50;
        }
        else if(x==3){
            r=y*5.00;
        }
        else if(x==4){
            r=y*2.00;
        }
        else if(x==5){
            r=y*1.50;
        }
        printf("Total: R$ %.2f\n",r);
    }

    return 0;
}
