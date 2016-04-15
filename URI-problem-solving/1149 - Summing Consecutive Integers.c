#include <stdio.h>
int main()
{
    int a,b,i,s=0,j=0;
    while(scanf("%d%d",&a,&b)==2){
        if(b<=0){
                while(b<=0){
                    scanf("%d",&b);
                }
        }
            for(i=a;j<b;i++){
                s=s+i;
                j++;
            }
            printf("%d\n",s);
            j=0;
            s=0;
    }
    return 0;
}
