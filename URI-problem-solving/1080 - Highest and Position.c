#include <stdio.h>
int main()
{
    int n=0,i,a[101],p;
    while(scanf("%d",&a[0])==1){
    for(i=1;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<100;i++){
        if(n<a[i]){
            n=a[i];
            p=i+1;
        }
    }
        printf("%d\n%d\n",n,p);
    }
    return 0;
}
