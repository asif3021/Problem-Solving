#include <stdio.h>
int main()
{
    int b=0,n,m;
    float a=0,r;
    while(scanf("%d",&n)==1){
        if(n>0){
            a=a+n;
            b++;
        }
        else{
            r=a/b;
            printf("%.2f\n",r);
            break;
        }
    }
    return 0;
}
