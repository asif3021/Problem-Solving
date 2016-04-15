
#include <stdio.h>
int main()
{
    int a[5],b[5],e=0,o=0,i,l,n;
    for(i=0;i<15;i++){
        scanf("%d",&n);
        if(n%2==0){
            a[e]=n;
            e++;
        }
        else{
            b[o]=n;
            o++;
        }


        if(e==5){
            for(l=0;l<e;l++){
                printf("par[%d] = %d\n",l,a[l]);
            }
            e=0;
        }
        if(o==5){
            for(l=0;l<o;l++){
                printf("impar[%d] = %d\n",l,b[l]);
            }
            o=0;
        }
        if(i==14){
            for(l=0;l<o;l++){
                printf("impar[%d] = %d\n",l,b[l]);
            }
            for(l=0;l<e;l++){
                printf("par[%d] = %d\n",l,a[l]);
            }
        }
    }
    return 0;
}
