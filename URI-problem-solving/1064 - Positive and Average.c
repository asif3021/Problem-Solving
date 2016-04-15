#include <stdio.h>
int main()
{
    float a[6],m=0;
    int i,n=0;
    while(scanf("%f",&a[0])==1){
        for(i=1;i<6;i++){
            scanf("%f",&a[i]);
        }
        for(i=0;i<6;i++){
            if(a[i]>=0){
                m=m+a[i];
                n++;
            }
        }
        m=m/n;
        printf("%d valores positivos\n%.1f\n",n,m);
        m=0;
        n=0;
    }
    return 0;
}
