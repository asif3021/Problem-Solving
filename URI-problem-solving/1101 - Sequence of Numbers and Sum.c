#include <stdio.h>
int main()
{
    int a,b,s=0,i;
    while(scanf("%d%d",&a,&b)==2){
        if(a==0||b==0){
            break;
        }
        else{
            if(a>b){
            for(i=b;i<=a;i++){
                printf("%d ",i);
                s=s+i;
            }
            }
            else{
            for(i=a;i<=b;i++){
                printf("%d ",i);
                s=s+i;
            }
            }
            printf("Sum=%d\n",s);
            s=0;
        }
    }
    return 0;
}
