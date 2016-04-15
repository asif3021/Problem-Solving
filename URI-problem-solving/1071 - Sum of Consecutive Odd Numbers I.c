#include <stdio.h>
int main()
{
    int a,b,i,s=0;
    while(scanf("%d%d",&a,&b)==2){
        if(a>b){
            for(i=b+1;i<a;i++){
                if(i%2==0){
                        continue;
                }
                else{
                    s=s+i;
                }
            }
        }
        else {
            for(i=a+1;i<b;i++){
                if(i%2==0){
                        continue;
                }
                else{
                    s=s+i;
                    }
            }
        }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
