#include <stdio.h>
int main()
{
    int i,b=0;
    float a[6];
    while(scanf("%f%f",&a[0],&a[1])==2){
        for(i=2;i<6;i++){
            scanf("%f",&a[i]);
        }
        for(i=0;i<6;i++){
            if(a[i]>=0){
                b++;
            }
        }
        printf("%d valores positivos\n",b);
        b=0;
    }
    return 0;
}
