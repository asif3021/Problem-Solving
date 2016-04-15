#include <stdio.h>
int main()
{
    int a[3],b[3],n,i,j;
    while(scanf("%d%d",&a[0],&a[1])==2){
        scanf("%d",&a[2]);
        for(i=0;i<3;i++){
                b[i]=a[i];
        }
    for (i = 0; i < 3; i++){
        for (j = i + 1; j < 3; j++){
            if (b[i] > b[j]){
                n =  b[i];
                b[i] = b[j];
                b[j] = n;
                }
            }
        }
        for(i=0;i<3;i++){
            printf("%d\n",b[i]);
        }
        printf("\n");
        for(i=0;i<3;i++){
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
