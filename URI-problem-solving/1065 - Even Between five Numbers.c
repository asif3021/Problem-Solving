#include <stdio.h>
int main()
{
    int a[5],i,e=0;
    while(scanf("%d",&a[0])==1){
        for(i=1;i<5;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++){
            if(a[i]%2==0){
                e++;
            }
        }
        printf("%d valores pares\n",e);
        e=0;
    }
    return 0;
}
