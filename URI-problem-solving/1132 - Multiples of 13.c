#include <stdio.h>
int main()
{
    int a,b,i,s=0,o;
    while(scanf("%d%d",&a,&b)==2){
            if(b>a){
        for(i=a;i<=b;i++){
                o=i%13;
        if(o!=0){
            s = s + i;
        }
        }
            }
            else{

        for(i=b;i<=a;i++){
                o=i%13;
        if(o!=0){
            s = s + i;
        }
        }
            }
        printf("%d\n",s);
        s=0;
    }
    return 0;
}
