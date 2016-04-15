#include <stdio.h>
int main()
{
    int a[5],i,p=0,n=0,e=0,o=0;
    while(scanf("%d",&a[0])==1){
        for(i=1;i<5;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<5;i++){
            if(a[i]>0){
                p++;
            }
            if(a[i]<0){
                n++;
            }
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        printf("%d valor(es) par(es)\n",e);
        printf("%d valor(es) impar(es)\n",o);
        printf("%d valor(es) positivo(s)\n",p);
        printf("%d valor(es) negativo(s)\n",n);
        e=0;
        o=0;
        p=0;
        n=0;
    }
    return 0;
}
